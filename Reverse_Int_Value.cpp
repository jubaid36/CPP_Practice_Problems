#include<bits/stdc++.h>  // C++ লাইব্রেরি যা সকল সাধারণ ইনপুট/আউটপুট এবং কনটেইনার ব্যবহার করে
using namespace std;

int main() {
    int num, reverse = 0;  // 'num' হল ইনপুট সংখ্যা, 'reverse' হল উল্টো করা সংখ্যা
    cout << "Input the numbers: ";  // ইনপুট নিতে ব্যবহারকারীকে জানানো
    cin >> num;  // ব্যবহারকারীর কাছ থেকে একটি সংখ্যা ইনপুট নেয়া

    // যতক্ষণ num শূন্য না হয়, ততক্ষণ লুপ চলবে
    while (num != 0) {  
        int digit = num % 10;  // num এর শেষ ডিজিট বের করা (modulo অপারেটর ব্যবহার)
        reverse = reverse * 10 + digit;  // reverse ভেরিয়েবলে উল্টো ডিজিট যোগ করা
        num = num / 10;  // num এর শেষ ডিজিট বাদ দিয়ে বাকি অংশ নেয়ার জন্য num কে ভাগ করা
    }

    cout << "The reversed number: " << reverse << endl;  // উল্টো সংখ্যা প্রিন্ট করা
    return 0;  // প্রোগ্রাম সফলভাবে শেষ হওয়া
}
