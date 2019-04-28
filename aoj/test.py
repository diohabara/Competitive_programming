#%%
import matplotlib.pyplot as plt
from math import sqrt
import random
a = [random.random() for _ in range(100)]
def x(a):
    return sqrt((a ** 2 + 1) / (4 * (-a ** 6 + a ** 4 + 5 * a ** 2 + 2 * sqrt(2) * sqrt(-a ** 10 - 3 * a ** 8 - 2 * a ** 6 + 2 * a ** 4 + 3 * a ** 2 + 1) + 3) ** (1 / 3)) + (-a ** 6 + a ** 4 + 5 * a ** 2 + 2 * sqrt(2) * sqrt(-a ** 10 - 3 * a ** 8 - 2 * a ** 6 + 2 * a ** 4 + 3 * a ** 2 + 1) + 3) ** (1 / 3) / (4(a ** 2 + 1)) + 1 / 2)
x_list = [x(a[i]) for i in range(len(a))]
plt.plot(a, x)