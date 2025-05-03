#include<bits/stdc++.h>  // Standard C++ header file, যেটা প্রায় সব ধরনের standard library অন্তর্ভুক্ত করে
using namespace std;    // std namespace ব্যবহার করলে বারবার std:: লিখতে হয় না

int main()              // main() function হলো C++ প্রোগ্রামের entry point
{
    int n;              // n ইনপুট হিসেবে factorial-এর সংখ্যা রাখবে
    long long fact = 1; // fact ভ্যারিয়েবলটি factorial মান রাখার জন্য, long long কারণ বড় সংখ্যার জন্য

    cout<<"Input the N: ";  // ইউজারকে n ইনপুট দিতে বলছে
    cin>>n;                 // ইউজার থেকে n ইনপুট নিচ্ছে

    // 1 থেকে n পর্যন্ত loop চালিয়ে factorial হিসেব করা হচ্ছে
    for(int i=1; i<=n; i++)
    {
        fact *= i;          // fact = fact * i; মানে প্রতি ধাপে fact-এর সাথে i গুণ করা হচ্ছে
    }

    // ফলাফল দেখানো হচ্ছে
    cout<<n<<"! Factorial Result: "<<fact<<endl;

    return 0;   // প্রোগ্রাম সফলভাবে শেষ হয়েছে বোঝাতে 0 রিটার্ন করছে
}
