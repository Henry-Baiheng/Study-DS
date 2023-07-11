// Created on iPad.
//从顺序表中删除具有最小值的元素详细见题目 Page17-01
bool Del_min(SqList &L,ElemType &value)
{
   if(L.lenth==0)//表空
   {
      retun false;
   }
   value = L.data[0];//最小值设为0号
   int pos=0;
   for(int i=1;i<L.lenth;i++)//寻找最小值元素
   {
      if(L.data[i]<value)
      {
         value=L.data[i];
         pos=i;
      }
   }
   L.data[pos]=L.data[L.lenth-1];//根据题意空出的位置由最后一个元素填补
   L.lenth--;
   return true;
}
