#include <ros/ros.h>
#include <geometry_msgs/Twist.h> 
#include <std_msgs/Float64.h>
#include <stdlib.h> 

int main(int argc, char **argv) {
     //Initializes ROS, and sets up a node
     ros::init(argc, argv, "aqrabuamelu");
     ros::NodeHandle nh;

     //Ceates the publisher, and tells it to publish
     //to the husky/cmd_vel topic, with a queue size of 100
     ros::Publisher coxaLF=nh.advertise<std_msgs::Float64>("/Golem/coxa_joint_LF_position_controller/command", 100);
     ros::Publisher coxaLM=nh.advertise<std_msgs::Float64>("/Golem/coxa_joint_LM_position_controller/command", 100);
     ros::Publisher coxaLR=nh.advertise<std_msgs::Float64>("/Golem/coxa_joint_LR_position_controller/command", 100);
     ros::Publisher coxaRF=nh.advertise<std_msgs::Float64>("/Golem/coxa_joint_RF_position_controller/command", 100);
     ros::Publisher coxaRM=nh.advertise<std_msgs::Float64>("/Golem/coxa_joint_RM_position_controller/command", 100);
     ros::Publisher coxaRR=nh.advertise<std_msgs::Float64>("/Golem/coxa_joint_RR_position_controller/command", 100);

     ros::Publisher femurLF=nh.advertise<std_msgs::Float64>("/Golem/femur_joint_LF_position_controller/command", 100);
     ros::Publisher femurLM=nh.advertise<std_msgs::Float64>("/Golem/femur_joint_LM_position_controller/command", 100);
     ros::Publisher femurLR=nh.advertise<std_msgs::Float64>("/Golem/femur_joint_LR_position_controller/command", 100);
     ros::Publisher femurRF=nh.advertise<std_msgs::Float64>("/Golem/femur_joint_RF_position_controller/command", 100);
     ros::Publisher femurRM=nh.advertise<std_msgs::Float64>("/Golem/femur_joint_RM_position_controller/command", 100);
     ros::Publisher femurRR=nh.advertise<std_msgs::Float64>("/Golem/femur_joint_RR_position_controller/command", 100);

     ros::Publisher tarsusLF=nh.advertise<std_msgs::Float64>("/Golem/tarsus_joint_LF_position_controller/command", 100);
     ros::Publisher tarsusLM=nh.advertise<std_msgs::Float64>("/Golem/tarsus_joint_LM_position_controller/command", 100);
     ros::Publisher tarsusLR=nh.advertise<std_msgs::Float64>("/Golem/tarsus_joint_LR_position_controller/command", 100);
     ros::Publisher tarsusRF=nh.advertise<std_msgs::Float64>("/Golem/tarsus_joint_RF_position_controller/command", 100);
     ros::Publisher tarsusRM=nh.advertise<std_msgs::Float64>("/Golem/tarsus_joint_RM_position_controller/command", 100);
     ros::Publisher tarsusRR=nh.advertise<std_msgs::Float64>("/Golem/tarsus_joint_RR_position_controller/command", 100);

     ros::Publisher tibiaLF=nh.advertise<std_msgs::Float64>("/Golem/tibia_joint_LF_position_controller/command", 100);
     ros::Publisher tibiaLM=nh.advertise<std_msgs::Float64>("/Golem/tibia_joint_LM_position_controller/command", 100);
     ros::Publisher tibiaLR=nh.advertise<std_msgs::Float64>("/Golem/tibia_joint_LR_position_controller/command", 100);
     ros::Publisher tibiaRF=nh.advertise<std_msgs::Float64>("/Golem/tibia_joint_RF_position_controller/command", 100);
     ros::Publisher tibiaRM=nh.advertise<std_msgs::Float64>("/Golem/tibia_joint_RM_position_controller/command", 100);
     ros::Publisher tibiaRR=nh.advertise<std_msgs::Float64>("/Golem/tibia_joint_RR_position_controller/command", 100);


     //Sets up the random number generator
     srand(time(0));

     //Sets the loop to publish at a rate of 10Hz
     ros::Rate rate(10);

       while(ros::ok()) {
            //Declares the message to be sent
        
            std_msgs::Float64 msg;
            msg.data=-0.5;
           
           
           tibiaLF.publish(msg);

           msg.data=0.5;
           tibiaRF.publish(msg);

          //Delays untill it is time to send another message
          rate.sleep();
         }
}