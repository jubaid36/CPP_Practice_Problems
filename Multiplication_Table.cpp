#include<iostream> // ইনপুট ও আউটপুটের জন্য দরকারি হেডার ফাইল
using namespace std;

int main()
{
    int n; // একটি integer ভেরিয়েবল n ডিক্লেয়ার করা হয়েছে

    // ইউজার থেকে একটি সংখ্যা ইনপুট নেয়া হচ্ছে
    cout << "Input The Multiplication Value: ";
    cin >> n;

    // 1 থেকে 10 পর্যন্ত loop চলবে এবং n এর গুণফল প্রিন্ট করবে
    for(int i = 1; i <= 10; i++) // i = 1 থেকে শুরু, প্রতি ধাপে 1 করে বাড়বে, যতক্ষণ না i > 10
    {
        // প্রতিবারের জন্য n গুণ i দেখানো হচ্ছে (multiplication table)
        cout << n << " x " << i << " = " << n * i << " " << endl;
    }

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}
