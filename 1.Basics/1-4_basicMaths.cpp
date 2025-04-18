#include <iostream>
#include <math.h>
using namespace std;

// // 1.1
// void count_digit(int N) {
//   int num, count = 0;
//   while (N > 0) {
//     num = N % 10;
//     count += 1;
//     N /= 10;
//   }
//   cout << count << endl;
// }

// // 1.2
// void count_digit(int N) {
//   cout << int(log10(N) + 1) << endl;
// }

// // 2
// void reverse_num(int N) {
//   int num, rev = 0;
//   while (N > 0) {
//     num = N % 10;
//     rev = rev * 10 + num;
//     N /= 10;
//   }
//   cout << rev << endl;
// }


// // 3
// int check_palindrome(int N) {
//     int num, rev = 0;
//     int newnum = N;
//     while (N > 0) {
//       num = N % 10;
//       rev = rev * 10 + num;
//       N /= 10;
//     }
//     cout << rev << endl;
//     if (newnum == rev) return 1;
//     else return 0;
// }


// // 4
// int amstrong(int N) {
//   int num = N, n, no, a = 0;

//   n = int(log10(N) + 1);

//   while (N > 0) {
//     no = N % 10;
//     a = a + pow(no, n);
//     N /= 10;
//   }
//   if (num == a) return 1;
//   else return 0;
// }



// // 5.1
// void all_divisors(int N) {
//   for (int i = 1; i <= N; i++) {
//     if (N % i == 0) cout << i << endl;
//   }
// }

// // 5.2
// void all_divisors(int N) {
//   for (int i = 1; i*i <= N; i++) {
//     if (N % i == 0) cout << i << endl;
//     if ((N % i == 0) && (N/i) != i) cout << N/i << endl;
//   }
// }

// Question to be seen once 
// sum of all divisors 

int sumOfDivisors(int n) {
  int sum = 0 ;
  
  for ( int i = 1 ; i <= n ; i++)  { 
      sum = sum +  ( n / i ) * i ; 
  }
  
  return sum ; 
}

// // 6
// int isPrime(int N) {
//   for (int i = 2; i*i <= N; i++) {
//     if (N % i == 0) return 0;
//   }
//     return 1;
// }

// // 7.1
// void hcf(int n1, int n2) {
//   for (int i = 1; i <= min(n1, n2); i++) {
//     if (n1 % i == 0 && n2 % i == 0) cout << i << endl;
//   }
// }

// // 7.2
// void hcf(int n1, int n2) {
//   for (int i = min(n1, n2); i >= 1; i--) {
//     if (n1 % i == 0 && n2 % i == 0) {
//       cout << i << endl;
//       break;
//     }
//   }
// }

// 7.3
void hcf(int num1, int num2) {
    while (num1 > 0 && num2 > 0) {
        if(num1 > num2) num1 = num1 % num2;
        else num2 = num2 % num1;
    }

    if(num1 == 0) cout << num2 << endl;
    else cout << num1 << endl;
}

// lcm = (n1*n2)/hcf(n1, n2)
vector<int> lcmAndGcd(int a, int b) {
  int A = a , B = b ; 
  int lcm ; 
  int gcd ; 
  
  while( a>0 && b>0 ) {
      if ( a < b ) b = b % a ; 
      else a = a % b ; 
  }
  
  if ( a == 0 )  gcd = b ; 
  else gcd = a ;
  
  lcm = (A * B) / gcd ;
  
  return {lcm , gcd };
}

int main() {
  // count_digit(2339);
  // count_digit(644);

  // reverse_num(10002);
  // reverse_num(153);
  // reverse_num(600);

  // if (check_palindrome(191)) cout << "Palindrome";
  // else cout << "Not a Palindrome";
  
  // if (amstrong(153)) cout << "Amstrong";
  // else cout << "Not Amstrong";

  // all_divisors(36);

  // // to check prime
  // if(isPrime(566)) cout << "prime";
  // else cout << "Not Prime";
  
  // // to get prime number in a range 
  // for (int i = 0 ; i <= 100 ; i++ ){
  // if(isPrime(i)) cout << i << endl;
  // }

  hcf(10, 52);
  hcf(15, 20);


  
}