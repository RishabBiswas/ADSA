Find Defective Coin Program takes the input as the size of array(No of the coins to be tested) and then takes the weigh of the coins as input.

The program uses Divide and conquer Approach, the array is divided into two halves and the one weighing less is again divides into two halves and weighed recursively.

This reduces the weighing to log(n) times

There are a few “constant” checks outside the halving:

If n is odd, sometimes you need 1 extra weighing to test the leftover coin.

If all coins are equal, you might need 1 more check to confirm “no defective coin.”

Therefore the time complexity comes as log(n)(base 2) + constant(C) 