NOTE : The program entitled Neural Network in C++ by Dave Miller has been modified (See Corrections Directory) as apparently it had a bug in it.
It was training and working ok but I'll stick with the bug correction made by some user of the code.


-------------------------
To Run the Neural Net program, it consists of 2 parts.  First a program to generate the test data (Neuron_Data), then a program to use the test data to train the neural network (Neuron_App) :

Step 1)

Generate the Training Data (trainingData.txt) using Neuron_Data.
Go into the Debug directory of Neuron_Data and run the application as follows :

Neuron_Data.exe > trainingData.txt



Step 2) 

Then put the trainingData.txt in the appropriate directory of Neuron_App and run Neuron_App.

Neuron_App.exe > result.txt

The result will show you how the neural network responds to the training data as it gets all trained up.