double * derivada(double X[2], float t){
    float g = 9.8;
    double * Y = new double[2];
    Y[0] = X[1];
    Y[1] = - g;
    return Y;
    
}

double * suma(double a[2], double b[2]){
    double * c = new double[2];
    c[0] = a[0] + b[0];
    c[1] = a[1] + b[1];
    return c;
}
double * runge4(float dt, float t, double X[2]){
    double * k1 = new double[2];
    double * k2 =new double[2];
    double * k3 = new double[2];
    double * k4 = new double[2];
    double * A = new double[3];
    k1[0] = derivada(X,t)[0]*(dt*0.5);
    k1[1] = derivada(X,t)[1]*(dt*0.5);
    k2[0] = derivada(suma(X,k1),t+dt*0.5)[0]*(dt*0.5);
    k2[1] = derivada(suma(X,k1),t+dt*0.5)[1]*(dt*0.5);
    k3[0] = derivada(suma(X,k2),t+dt*0.5)[0]*(dt);
    k3[1] = derivada(suma(X,k2),t+dt*0.5)[1]*(dt);
    k4[0] = derivada(suma(X,k3),t+dt)[0]*(dt);
    k4[1] = derivada(suma(X,k3),t+dt)[1]*(dt);
    A[0] = t+dt;
    A[1] =(float)(X[0] + ((k1[0]*2) + (k2[0]*2) + k3[0] + k4[0])/6);
    A[2] = (float)(X[1] + ((k1[1]*2) + (k2[1]*2) + (k3[1]) + (k4[1]))/6);
    return A;
}