import matplotlib.pyplot as plt 
import numpy as np

count = np.zeros(12,dtype+int)  #from 1....12
for dice1 in range(1,7,1):
    for dice2 in range(1,7):
        s=dice1+dice2
        count[s-1] += 1

for z,p in enumerate(count):
    print("z=",z+1," p=",p)

#fig, ax=plt.subplots()
#ax.hist(count,bins=12)

fig,ax = plt.subplots()
ax.bar(range(1,13),count,width=0.1);

## Implement a python function that simulates rolling the 2 dices 
# and that returns the values of the two dies

def roll_two_dices():
    s1=np.random.randint(1,7)
    s2=np.random.randint(1,7)
    return s1,s2

np.random.seed(1)

print(roll_two_dices())
print(roll_two_dices())

## Plot the frequency distribution from 100 dices rolls for sum values from 1 ...14

n_rolls =100
values = range(1,14+1)
count = np.zeros_like(values,dtype=int)
np.random.seed(None)

for i in range(n_rolls):
        s1,s2 = roll_two_dices()
        s=s1+s2
        count[s-1] += 1
print(count)

fig,ax = plt.subplots()
ax.bar(values,count,width=0.2)
ax.set(xlabel="sum of both dices S", ylabel="frequency for {n_rolls} rolls");


#PMF

probability=count/count.sum()
fig,ax = plt.subplots()
ax.bar(values,count,width=0.2)
ax.set(xlabel="sum of both dices S", ylabel=f"probability P");

 

