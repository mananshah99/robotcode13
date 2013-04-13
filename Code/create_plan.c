// Created on Sat March 30 2013
#define sleeptime 2000
#include "createDrive.c"

void drive_out()
{
	create_drive_direct_dist(350,350,90); // drive out of the starting position
	create_drive_direct_right(300,500,20); // first turn right
	create_drive_direct_right(100,500,80); // complete the turn right and end up near the first tribble box that matters	
}

int main()
{
	create_connect(); 
	drive_out(); // look at the function above
	create_block(); // regular block function
	printf("at the first tribble stop\n");
	msleep(sleeptime); // simulates the create picking up the tribbles
	printf("finished sleeping\n");
	//create_backward(200,50);
	msleep(sleeptime);
	create_drive_direct_left(100,2,55); // move to the next pile
	create_block();
	create_backward(25,200); // backs up so the claw can fit properly
	create_block();
	printf("at the first tribble stop\n");
	msleep(sleeptime); //waits, simulating the create picking up tribbles
	printf("finished sleeping\n");
	
	create_drive_direct_right(100,500,45); // turns to face forward
	create_block();

	/************************************************************************************************************************************/
	//stuff I haven't completed yet
	
	create_forward(125,180);
	create_block();
	msleep(sleeptime);
	create_drive_direct_right(10,500,90);
	create_block();
	msleep(sleeptime);
	create_backward(50,200);
	create_drive_direct_right(10,500,90);
	create_block();
	msleep(sleeptime);
	create_drive_direct_left(500,100,80);
	create_block();
	create_drive_direct_left(500,100,80);
	create_block();
	create_forward(125,300);
	
	/************************************************************************************************************************************/
	
	//create_forward(350,300); // goes to the next destination
	create_block();
	msleep(sleeptime);
	
	/*create_drive_direct_right(100,500,15); // turns into the third tribble position
	create_block();
	msleep(sleeptime);
	*/
	
	create_backward(50,300);	// backs up (and waits) for the fourth position
	create_block();
	msleep(sleeptime);	
	
	create_drive_direct_left(500,100,35); // drives to the fourth position and waits (simulating pickup)
	create_block();	
	msleep(sleeptime);
	
	//create_drive_direct_right(100,500,80);
	//printf("if I am not broken, then the program has ended");
	
	
	/*
	create_drive_direct(500,500); // for right now, this is the create driving on the main road
	
	create_wait_event(LEFT_BUMP); // this is aligning and turning into the base on the other side. 
	create_backward(aligndist,500);
	create_drive_direct_left(100,500,81);
	*/
	create_disconnect();
	
}

//all the cde does so far is picks up the first two piles of tribbles. I need to replicate the code to pick up the other 2 piles. 
