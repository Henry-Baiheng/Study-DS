// Created on iPad.

//顺序表逆置  空间复杂度 O(1)


void Reverse(Sqlist &L)
{
   ElemType temp;// 辅助变量
   for(int i=0;i<L.lenth/2;i++)//首尾对称交换
   {
        temp=L.data[i];
        L.data[i]=L.data[L.lenth-i-1];
        L.data[L.lenth-i-1]=temp;
   }
}