import numpy as np

Year = int(input("Enter your Birth Year(eg. 1950):"))
Month = int(input("Enter your Birth Month(eg. 01 for January):"))
Date = int(input("Enter your Birth Date(eg. 31):"))

Year_1 = int(Year/100)
Year_2 = int(Year%100)

sum = Date+Month+Year_1+Year_2

def Verification(Magic_square):
    if Magic_Square[0,0]+Magic_Square[0,1]+Magic_Square[0,2]+Magic_Square[0,3] == sum:
        if Magic_Square[1,0]+Magic_Square[1,1]+Magic_Square[1,2]+Magic_Square[1,3] == sum:
            if Magic_Square[2,0]+Magic_Square[2,1]+Magic_Square[2,2]+Magic_Square[2,3] == sum:
                if Magic_Square[3,0]+Magic_Square[3,1]+Magic_Square[3,2]+Magic_Square[3,3] == sum:
                    if Magic_Square[0,0]+Magic_Square[0,3]+Magic_Square[3,0]+Magic_Square[3,3] == sum:
                        if Magic_Square[0,0]+Magic_Square[1,1]+Magic_Square[2,2]+Magic_Square[3,3] == sum:
                            if Magic_Square[0,3]+Magic_Square[1,2]+Magic_Square[2,1]+Magic_Square[3,0] == sum:
                                if Magic_Square[0,1]+Magic_Square[0,2]+Magic_Square[3,1]+Magic_Square[3,2] == sum:
                                    if Magic_Square[1,0]+Magic_Square[2,0]+Magic_Square[1,3]+Magic_Square[2,3] == sum:
                                        if Magic_Square[0,0]+Magic_Square[0,1]+Magic_Square[1,0]+Magic_Square[1,1] == sum:
                                            if Magic_Square[0,2]+Magic_Square[0,3]+Magic_Square[1,2]+Magic_Square[1,3] == sum:
                                                if Magic_Square[1,0]+Magic_Square[1,1]+Magic_Square[2,0]+Magic_Square[2,1] == sum:
                                                    if Magic_Square[1,1]+Magic_Square[1,2]+Magic_Square[2,1]+Magic_Square[2,2] == sum:
                                                        if Magic_Square[1,2]+Magic_Square[1,3]+Magic_Square[2,2]+Magic_Square[2,3] == sum:
                                                            if Magic_Square[2,0]+Magic_Square[2,1]+Magic_Square[3,0]+Magic_Square[3,1] == sum:
                                                                if Magic_Square[2,2]+Magic_Square[2,3]+Magic_Square[3,2]+Magic_Square[3,3] == sum:
                                                                    return True

Magic_Square = np.matrix([[Date,Month,Year_1,Year_2],[Year_2+1,Year_1-1,Month-3,Date+3],[Month-2,Date+2,Year_2+2,Year_1-2],[Year_1+1,Year_2-1,Date+1,Month-1]])

if Verification(Magic_Square):
    print(Magic_Square)