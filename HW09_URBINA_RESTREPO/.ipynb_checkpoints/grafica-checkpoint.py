import matplotlib.pyplot as plt
import numpy as np 

a = np.loadtxt("datos.txt", delimiter = ",")
plt.scatter(a[:,0], a[:,1])
plt.xlabel("t (s)")
plt.ylabel("y (m)")
plt.savefig("grafica.pdf")