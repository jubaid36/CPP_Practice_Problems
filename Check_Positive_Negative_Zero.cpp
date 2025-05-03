#include<bits/stdc++.h> // সব ধরনের standard লাইব্রেরি ইনক্লুড করা হয়েছে
using namespace std;    // standard namespace ব্যবহার করা হয়েছে

int main()
{
    int n; // একটি integer ভেরিয়েবল n ঘোষণা করা হয়েছে

    cout << "Input the value: "; // ইউজারকে ইনপুট দেওয়ার জন্য প্রম্পট দেখানো হচ্ছে
    cin >> n; // ইউজার থেকে সংখ্যা ইনপুট নেওয়া হচ্ছে

    if(n > 0) // যদি সংখ্যা ০-এর চেয়ে বড় হয়
    {
        cout << n << " is positive."; // তাহলে সেটা positive সংখ্যা হিসেবে প্রিন্ট করবে
    }
    else if(n < 0) // যদি সংখ্যা ০-এর চেয়ে ছোট হয়
    {
        cout << n << " is negative."; // তাহলে সেটা negative সংখ্যা হিসেবে প্রিন্ট করবে
    }
    else // উপরের কোনটাই না হলে, মানে n == 0
    {
        cout << "The number is zero."; // তখন সেটা zero হিসেবে প্রিন্ট করবে
    }

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}
