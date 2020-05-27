import matplotlib.pyplot as plt
import numpy as np 

datos = np.loadtxt("datos.txt", delimiter = ",")
plt.scatter(datos[:,0], datos[:,1])
plt.xlabel("t (s)")
plt.ylabel("y (m)")
plt.savefig("grafica.pdf")