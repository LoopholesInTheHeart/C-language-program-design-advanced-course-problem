
 学堂在线的C++语言程序设计进阶答案
 ===

[课程地址 ](www.xuetangx.com/courses/course-v1:TsinghuaX+00740043_2x_2015_T2+sp/courseware/8d1fd477f469492ba2c1297e6ace6f5d/ )

乱七八糟  
>一个比较扯淡的事情，在C10-1提交的时候，显示结果是提交不能被检查，  
反复检查程序没有错误之后，以为是提交系统抽风了。  
然后在做10-3题的时候，也是出现了类似的结果，  
偶尔提交完成后，返回结果中其中一例为正确，其他为错误。  
恰好10-3是做字符串匹配，于是就想到是不是中间有空格，  
测试系统对程序的输出形式也许是是没有空格的，输入和输出范例上是以回车结束的，  
(没有想到的原因是，题目字符串匹配一般来说中间是有空格的)  
恰好这个程序中读入函数使用的是getline而不是cin，于是乎换成cin读入，提交一次成功，结果也全对，  
于是乎c10-1也改掉，也是一次正确并通过。。。  
似乎这个提交系统对于这个支持并不是很好，醉了  
