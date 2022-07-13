Implement Secondory Memory based Dijakstra on Grid Partition Graph
PG Software Lab - CS 509


### Instructions

# Use PG Software Lab 3 code to generate grid and create .txt
# Read those txt and update adjancey list and apply Dijakstra.
# Entire Code is modularized for better understanding
# Code Modulariztion
#                     Node.cpp-----Edge.cpp------------------------------------|
#                        |            |                                        |
#                        |____________|                                        |
#                               |                                              |
#                           Block.cpp ( Represent Block Entity ) --------------|
#                               |                                              |
#                           Cell.cpp  ( Represent Cell Entity ) ---------------|
#                               |                                           Common.cpp (Common file for common functions and variables used across over the files )
#                           Grid.cpp  ( Represent Grid Entity ) ---------------|
#                               |                                              |
#                           2021CSM1002.cpp  ( Main File ) --------------------|


# To run the code
## Open the terminal from the location where 2021CSM1002.cpp,Common.cpp,Grid.cpp,Cell.cpp,Block.cpp,Node.cpp,Edge.cpp file exists
## Type "g++ -o app.exe 2021CSM1002.cpp Common.cpp Grid.cpp Cell.cpp Block.cpp Node.cpp Edge.cpp"
## Type ./app.exe to execute the code
# After the partitioning we get all the main disk block and overflow disk block .txt's in the same folder where .cpp file was located
# User Menu will provide options
"1. Get NodeId from CellId"
"2. Visualize the content of disk block and its associated overflow block for a particular Node."
"3. Visualize the whole grid"
"4. Apply Dijakstra on Entire Dataset"
"5. Apply Dijakstra on Grid"
"6. Exit Menu."
# option 1 will display the cell id of particular nodeId entered by user
# option 2 will display all the content of main and its associated overflow disk blocks on the terminal
# option 3 will Visualize the whole grid
# option 4 will compute the Dijakstra on Entire Dataset and display the shortest route path and distance from source to Destination.
# option 5 will compute the Dijakstra on Grid by finding the node cellId and fetching corresponding Main block edges and disk oveflow block Edges and display the shortest path and distance from source and destination and number of Main and Overflow disk blocks used.
# option 6 will terminate the program.