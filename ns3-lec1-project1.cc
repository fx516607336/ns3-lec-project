#include "ns3/core-module.h"
#include <iostream>
using namespace ns3;
NS_LOG_COMPONENT_DEFINE ("ns3-lec1-project1");

static void printfx(std::string xuehao,std::string name,float f) 
{
        float t=1/f;
	std::cout<<Simulator::Now()<<"姓名:"<<name<<" 学号:"<<xuehao<<std::endl;
	Simulator::Schedule(Seconds(t),&printfx,xuehao,name,f);
}

int main (int argc, char *argv[])
{
   CommandLine cmd;
   std::string xuehao;
   std::string name;
   float f,stoptime;
   cmd.AddValue ("name", "ming zi", name);
   cmd.AddValue ("xuehao", "xuehao0 0", xuehao);
   cmd.AddValue ("pinlv", "fff", f);
   cmd.AddValue ("stop", "stop time", stoptime);
   cmd.Parse(argc,argv);
   printfx(xuehao,name,f);
   Simulator::Stop(Seconds(stoptime));
   Simulator::Run ();
   Simulator::Destroy ();
   
}
