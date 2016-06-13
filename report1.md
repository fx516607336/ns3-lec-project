#Project1
##一. 任务
1.用命令行读入的自己的学号和姓名参数以及输出频率，周期性输出姓名和学号
2.利用unix实用工具wc(word count)统计输出的总次数
3.利用unix实用工具grep筛选特定信息
##二.实验结果
命令行读入参数，并周期性输出：http://ww4.sinaimg.cn/mw690/8ce1ff05gw1f4tvd00aq4j20jn0fytb3.jpg；
用wc统计输出的总次数：http://ww3.sinaimg.cn/mw690/8ce1ff05gw1f4tvd1fmd0j20ju0fz76q.jpg；
用grep筛选特定信息：http://ww1.sinaimg.cn/mw690/8ce1ff05gw1f4tvd27sp5j20k408rq4a.jpg；
##三.总结
所用的命令行输入：
cmd:
    ./waf run="ns3-lec1-project1 -name=fx -xuehao=2013010916006 -pinlv=10 -stop=5" 
cmd:
    ./waf run="ns3-lec1-project1 -name=fx -xuehao=2013010916006 -pinlv=10 -stop=5" |wc
cmd:
    ./waf run="ns3-lec1-project1 -name=fx -xuehao=2013010916006 -pinlv=10 -stop=5"  |grep "+1"
    
