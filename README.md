# comporg2016
Comp Org Group Project, Fall 2016
We had talked to Professor LaPre prior to starting the project, and he gave us the approval to have a team with 5 members on it.
Members: Kit Hammer, Lee Cattarin, John Marvin, Sarah Mogielnicki, and Bryan Johns
<br />
<br />
For our project, we broke down what code needed to be filled in into nine parts. Six of these parts we deemed "easy", or at least easier than the other three. We then assigned one of the three "hard" parts to a separate group member, I did LRU replace on miss. The other two were push pipepline stage and trap address. The six easy were divided in half and each half was assigned to a single group member. We then all collaborated to debug and test the filled in code. 
<br />
<br />
Kit Hammer and Bryan Johns:
<br />
Kit and Bryan worked together on the process_pipeline functions. Since these functions were deemed by the group to be somewhat easier than the other functions that we were required to implement. We also decided that we would implement these functions before any of the others, seeing as these functions were necessary for the other functions to run. Kit and Bryan met together and went over the functions one by one, implementing them one at a time. By working together, they were able to finish this part of the project in a timely maner.
<br />
<br />
John Marvin:
<br />
John worked on implementing the iplc_sim_LRU_replace_on_miss() fuction.
<br />
<br />
Sarah Mogielnicki:
<br />
Sarah worked primarily on implementing the iplc_sim_push_pipeline_stage() function.
This function was already broken down step-by-step. Sarah went through and filled out the steps that were listed. Step one was given. Step two finds if the branch was taken by comparing instruction addresses at the fetch and decode stages, and then increments pipeline_cycles if the actual branch taken / not taken is different than the prediction. Step three first checks if the instruction at the MEM stage is loadword. If it is a loadword, it checks if there is a hit or a miss at the address, and if there is a miss, then 10 nops are inserted. It then checks what is happening immeadiately after the the MEM stage in the ALU stage. If the instruction in the ALU stage is affected by the load word, then another nop is inserted. In the fourth step, it checks if the instruction at the MEM stage is a store word, and if there is a miss on that it adds 10 cycles. Step five simply increments the pipeline by one, and then step six pushes the stages of the pipeline through. Step seven finishes the pipeline by setting the fetch stage back to NOP. 
<br />
<br />
Lee Cattarin:
<br />
Lee was the one that wrote the iplc_sim_trap_address() function.
<br />
<br />
Upon realizing that there was a segmentation fault in our code, everyone worked together to fix it. This included making corrections in iplc_sim_trap_address(), and iplc_sim_push_pipeline_stage(). By working together to get the project done, we were able to successfully finish the program.
