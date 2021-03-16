# popit emulator
# keith reid february 2021
# popit emulator
# keith reid february 2021

# libraries
import matplotlib
matplotlib.use('TkAgg')
import matplotlib.pyplot as plt

# model

def get_popit():
    popit = [    [0,0,0],
               [1,0,0,0,0],
              [0,0,0,0,1,0],
              [0,0,0,0,0,0],
               [0,0,0,0,0],
                 [0,1,0]     ]
    return popit

# view

# control

def simply_print(popit):
    x = 0
    y = 0
    for number_and_line in enumerate(popit):
        x = x + 1
        content = []
        pad_length = number_and_line[0]
        if pad_length   == 0:
                pad_length = 5
        elif pad_length == 1:
                pad_length = 4
        elif pad_length == 2:
                pad_length = 3
        
        for i in range(pad_length):
            content.append(" ")
            
        content.append(str(number_and_line[1]))
        if number_and_line[1] == 1:
            plt.scatter(x, y)
        print(content)
        plt.show

# main

if __name__ == "__main__":
    popit = get_popit()
    simply_print(popit)
    plt.scatter([1,2,3],[2,4,8])
    plt.show()
    plot_this_popit(popit)



# tests

def test_simply_print():
    popit = get_popit()
    simply_print(popit)
    
#test_simply_print()
    
    
