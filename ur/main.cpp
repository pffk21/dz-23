#include <iostream>
#include <vector>
using namespace std;

//задание 1
//int sum(const vector<int>&chicla)
//{
//    int suma=0;
//    for(int num:chicla)
//    {
//        while(num>0)
//        {
//            suma+=num%10;
//            num/=10;
//        }
//    }
//    return suma;
//}
//int main()
//{
//    vector<int> num2={12,104,81};
//    int res=sum(num2);
//    cout<<"Sum: "<<res<<endl;
//}



//задание 2
//double srednee(const vector<int>&chicla)
//{
//    int sum = 0;
//    int count = 0;
//
//    for(int num : chicla)
//    {
//        if (num > 0) {
//            sum += num;
//            count++;
//        }
//    }
//    if (count > 0)
//    {
//        return sum / count;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int main()
//{
//    vector<int> num2 =
//    double res = srednee(num2);
//    cout << "Среднее арифметичское: " << res << endl;
//}





//задание 3
//void maxminelement(const vector<int>&chicla)
//{
//    int maxmin=INT_MIN;
//    int position=-1;
//    for(int i=0;i<chicla.size();i++)
//    {
//        if(chicla[i]<0 && chicla[i]>maxmin)
//        {
//            maxmin=chicla[i];
//            position=i;
//        }
//    }
//    if(position!=-1)
//    {
//        cout<<"Максимальный отрицательный елемент: "<<maxmin<<" позиция: "<<position<<endl;
//    }
//}
//int main()
//{
//    vector<int>num2={-12, 104, 81};
//    maxminelement(num2);
//}




//задание 4
//void most(const vector<int>&chicla)
//{
//    int mostnumber=chicla[0];
//    int count =0;
//    for(int i=0;i<chicla.size();i++)
//    {
//        int count2=0;
//        for(int j=0;j<chicla.size();j++)
//        {
//            if(chicla[i]==chicla[j])
//            {
//                count2++;
//            }
//        }
//        if(count2>count)
//        {
//            count=count2;
//            mostnumber=chicla[i];
//        }
//    }
//    cout<<"Чаще всего попадается: "<<mostnumber<<endl;
//}
//int main()
//{
//    vector<int>num2={12, 104, 81,81};
//    most(num2);
//}



//задание 5
//void findMax(const vector<int>& chicla)
//{
//    int max= INT_MIN;
//    for (int i = 1; i < chicla.size(); i += 2)
//    {
//        if (chicla[i] % 3 == 0 && chicla[i] > max)
//        {
//            max = chicla[i];
//        }
//    }
//    if (max != INT_MIN)
//    {
//        cout << "Максимальные елемент который делится на 3: " << max << endl;
//    }
//}
//int main()
//{
//    vector<int> num2 = {12, 104, 81, 3};
//    findMax(num2);
//}




//задание 6
//void zamena(vector<int>& chicla)
//{
//    int max = INT_MIN;
//    int min = INT_MAX;
//    int maxindex = -1;
//    int minindex = -1;
//    for (int i = 0; i < chicla.size(); i++)
//    {
//        if (chicla[i] % 2 == 0 && chicla[i] > max)
//        {
//            max = chicla[i];
//            maxindex = i;
//        }
//        if (chicla[i] % 2 != 0 && chicla[i] < min)
//        {
//            min = chicla[i];
//            minindex = i;
//        }
//    }
//    if (maxindex != -1 && minindex != -1)
//    {
//        int temp =chicla [maxindex];
//        chicla[maxindex] = chicla[minindex];
//        chicla[minindex] = temp;
//    }
//    else
//    {
//        for (int& num : chicla)
//        {
//            num = 0;
//        }
//    }
//}
//
//int main()
//{
//    vector<int> num2 = {1,2,3,4,6,7,8};
//    zamena(num2);
//    cout << "Замена: ";
//    for (int num : num2) {
//        cout << num << " ";
//    }
//    cout << endl;
//}



//задание 7(а)
//int main()
//{
//    vector<int> array1 = {1, 2, 3, 4};
//    vector<int> array2 = {5, 6, 7, 8};
//    vector<int> array3;
//    array3.insert(array3.end(), array1.begin(), array1.end());
//    array3.insert(array3.end(), array2.begin(), array2.end());
//    cout << "3 массив: ";
//    for (int num : array3) {
//        cout << num << " ";
//    }
//    cout << endl;
//}

//(б)
//int main()
//{
//    vector<int> array1 = {1, 2, 3, 4};
//    vector<int> array2 = {1, 5, 6, 7};
//    vector<int> obchiy;
//    for (int num : array1)
//    {
//        bool found = false;
//        for (int num2 : array2)
//        {
//            if (num == num2)
//            {
//                found = true;
//                break;
//            }
//        }
//        if (!found)
//        {
//            obchiy.insert(obchiy.end(), num);
//        }
//    }
//    for (int num : array2)
//    {
//        bool found = false;
//        for (int num1 : array1)
//        {
//            if (num == num1)
//            {
//                found = true;
//                break;
//            }
//        }
//        if (!found)
//        {
//            obchiy.insert(obchiy.end(), num);
//        }
//    }
//    cout << "Присутствует только в одном из массивов: ";
//    for (int num : obchiy)
//    {
//        cout << num << " ";
//    }
//    cout << endl;
//}
