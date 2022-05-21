// Bit manipulation concepts and problems 


/*
   Set I th bit of a number 

		  n    =  1 1 0 1 0 1
		(1<<i) =      1 0 0 0 
				  ------------
				  1 1 1 1 0 1 
*/
int setIthBit(int &n, int i){
	int mask = (1 << i);
	n = n | mask;



/*
   Get I th bit of a number 
   
		  n    =  1 1 0 1 0 1
		(1<<i) =      1 0 0 0 
				  ------------
				      1
*/
int getIthBit(int n , int i){
	int mask = (1 << i);
	return (n & mask) > 0 ? 1 : 0;
}


/*
   Clear I th bit of a number 
   
		  n    =  1 1 0 1 0 1
		~(1<<i) = 1 1 1 0 1 1     
				  ------------
				  1 1 0 0 0 1
*/

int clearIthBit(int &n, int i){
	int mask = ~(1 << i);
	n =  n & mask;
}


/*
   Update I th bit of a number => First clear the bit and then set the bit 
   
		  n    =  1 1 0 1 0 1
		~(1<<i) = 1 1 1 0 1 1     
				  ------------
				  1 1 0 0 0 1

	      n    =  1 1 0 0 0 1
		 (v<<i) = 0 0 0 1 0 0    if  v = 1 updated bit = 1 else if v = 0 then updated bit = 0   
				  ------------
				  1 1 0 1 0 1

*/

void updateIthBit(int &n, int i , int v){
	n = clearIthBit(n, i);
	int mask = (v << i);
	n = n | mask;
}

/*
   Clear last I bits 

   		 -1 = 111111111111111
   
		  n    =  1 1 0 1 0 1
		(-1<<i) = 1 1 1 0 0 0     
				  ------------
				  1 1 0 0 0 0


*/
int clearLastIBits(int &n, int i){
	int mask = (-1 << i);
	int n = n && musk;
}

/*
   Clear bits in range of i to j

   		 00001111 = 2^i - 1  =  (1 << i) - 1

   		 ~0 = -1 = 1111111111 => ~0 << j+1 = 11111110000000
   
		   (1 << i) - 1   =  0 0 0 0 0 1 1 1 1
		   (~0) << (j+1)  =  1 1 0 0 0 0 0 0 0    
				            -------------------
				 ^        =  1 1 0 0 0 1 1 1 1

	       musk  =   1 1 0 0 0 1 1 1 1
	        n    =   1 1 0 1 0 1 1 0 1
					--------------------
					 1 1 0 0 0 1 1 0 1
*/
int clearBitsInRange(int &n , int i, int j){
	int a =  (~0) << (j+1);
	int b = (1 << i) - 1
	int musk = a | b;
	int n = n & musk;
}

/*
   Replace bits in range of i to j => Clear bits from i to j and replace

*/
int replaceBitsInRange(&n , int i, int j){

	n = clearBitsInRange(n , i , j, v);
	int mask = (v << i);
	n = musk | n
}

/*
   Check weather number is a power of two or not

     if power of 2 => n     =    1 0 0 0 0 0 
                     n - 1  =      1 1 1 1 1
                                -------------
                        &         0 0 0 0 0 0 

*/
void checkPowerOfTwo(int n){

		if ((n & (n-1)) == 0){
			cout << "Power of 2";
		}
		else cout << "Not a power of 2"
}

bool isPowerOfFour(int n) {
	
       if (isPowerOfTwo(n) && ((n-1) % 3) == 0) return 1;
       else return 0;
}





