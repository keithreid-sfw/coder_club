# popit emulator
# keith reid february 2021

# libraries
import matplotlib
matplotlib.use('TkAgg')
import matplotlib.pyplot as plt

# model

def get_popit():
    popit = [    [0,0,0,],
               [0,0,0,0,0],
              [0,0,0,0,0,0],
              [0,0,0,0,0,0],
               [0,0,0,0,0],
                 [0,0,0]     ]
    return popit

# view

# control

def simply_print(popit):
    for number_and_line in enumerate(popit):
        content = []
        for i in range(number_and_line[0]):
            content.append(" ")
        content.append(str(number_and_line[1]))
        print(content)

# main

if __name__ == "__main__":
    popit = get_popit()
    simply_print(popit)
    #plt.scatter([1,2,3],[2,4,8])
    #plt.show()

