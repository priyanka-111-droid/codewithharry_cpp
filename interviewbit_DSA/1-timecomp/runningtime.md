## Analysing time complexity through Running time

Running time of Algo depends on:

1.Single and multiple processor

2.Read and write speed of program to memory or disk

3.32 bit vs 64 bit architecture

4.Configuration of machine

5.Input

For time complexity,we are concerned about INPUT.

## Now evaluating running time as function of input.

Lets say we have modal machine:

* single processor,32 bit,sequential execution,1 unit of time for arithmetic and logical operations

* eg.define function that 
calculates sum of 2 numbers

        sum(num1,num2):
            return num1+num2

Function has one instruction having return and srithmetic statement.By model machine return(takes 1 unit of time)and arithmetic statements take 1 unit of time,total 2 units of time.Irrespective of input,funcion takes 2 unit time.

T(n)=2

        sum(list,sizeoflist):
            total=0                          1)1 unit time
            for i->0 to sizeoflist: (n+1)    2)2 units time
                total=total+list[i]  (n)     3)2 units time(=,+)

            return total                     4)1 unit time


                            total time       = 1+2(n+1)+2n+1

                                 T(n)        = 4n+4

Q)TIme complexity for function of input for sum of matrix 

matrix has n^2

T(n)=an^2+bn+c

## Asymptotic notations:Theta,omega