#include <bits/stdc++.h> // সব ধরনের standard library ইনক্লুড করে
using namespace std;

int main()
{
    int num, count = 0;

    // ইউজারের কাছ থেকে একটি সংখ্যা ইনপুট নেয়া হচ্ছে
    cout << "Input the number: ";
    cin >> num;

    // ২ থেকে num-1 পর্যন্ত প্রতিটি সংখ্যার মাধ্যমে ভাগ করে দেখা হচ্ছে
    for (int i = 2; i < num; i++)
    {
        // যদি num কে i দিয়ে ভাগ করলে ভাগশেষ 0 হয়
        if (num % i == 0)
        {
            count++; // তাহলে এটি কোনো সংখ্যা দ্বারা বিভাজ্য, প্রাইম না
        }
    }

    // যদি count এখনো 0 থাকে, তাহলে এটি প্রাইম (কারণ কোনো সংখ্যা ভাগ দিতে পারেনি)
    if (count == 0)
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        // নাহলে এটি প্রাইম নয়
        cout << num << " is not a prime number." << endl;
    }
}
