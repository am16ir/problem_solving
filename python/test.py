import random

dict={"1":"ROCK" , "2":"SCISSORS","3":"PAPER"}
while True :
    print ("Enter...")
    print ("1 for ROCK")
    print ("2 for SCISSORS")
    print ("3 for PAPER\n")

    playerchoice=input()

    if playerchoice not in dict :
        print("Error!! ")
        continue

    player=int(playerchoice)
    computer=random.choice([1,2,3])
    
    print ("You Chose",dict[playerchoice],"\nComputer Chose",dict[str(computer)])
    if player==1 and computer==2 or \
       player==2 and computer==3 or \
       player==3 and computer==1 :
        print("You Win! ")
    elif player==computer :
        print("Draw! ")
    else : 
        print ("You Lost! ")
    exit=input("Enter 1 to play again\nEnter 0 to exit\n".title())
    if exit == "0" :
        print("Thanks For Playing ")
        break