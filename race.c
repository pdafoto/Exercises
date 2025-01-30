#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section
struct Race
{
  int   numberOfLaps;
  int   currentLap;
  char* firstPlaceDriverName;
  char* firstPlaceRaceCarColor;
};
struct RaceCar
{
  char* driverName;
  char* raceCarColor;
  int   totalLapTime;
};
// Print functions section
void printIntro()
{
  printf("Welcome to our main event digital race fans!\n");
  printf("I hope everybody has their snacks because we are about to begin!\n");
}

void printCountDown()
{
  printf("Racers Ready! In...\n");
  printf("5\n");
  printf("4\n");
  printf("3\n");
  printf("2\n");
  printf("1\n");
  printf("Race!\n");
}

void printFirstPlaceAfterLap(struct Race race)
{
  printf("After lap number %d\n", race.currentLap);
  printf("First Place Is: %s in the %s race car!\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void printCongratulation(struct Race race)
{
  printf("Let's all congratulate %s in the %s race car for an amazing performance.\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
  printf("It truly was a great race and everybody have a goodnight!.\n");
}
// Logic functions section
int calculateTimeToCompleteLap()
{
  int speed;
  int acceleration;
  int nerves;

  speed = (rand() % 3) + 1;
  acceleration = (rand() % 3) + 1;
  nerves = (rand() % 3) + 1;
  return (speed + acceleration + nerves);
}

void updateRaceCar(struct RaceCar* raceCar)
{
  raceCar->totalLapTime += calculateTimeToCompleteLap();
}

void updateFirstPlace(struct Race* race, struct RaceCar* raceCar1, struct RaceCar* raceCar2)
{
  if(raceCar1->totalLapTime <= raceCar2->totalLapTime)
  {
    race->firstPlaceDriverName = raceCar1->driverName;
    race->firstPlaceRaceCarColor = raceCar1->raceCarColor;
  }
  else
  {
    race->firstPlaceDriverName = raceCar2->driverName;
    race->firstPlaceRaceCarColor = raceCar2->raceCarColor;
  }
}

void startRace(struct RaceCar* raceCar1, struct RaceCar* raceCar2)
{
  struct Race race = {5, 1, "", ""};
  while(race.numberOfLaps <= race.numberOfLaps)
  {
    updateRaceCar(raceCar1);
    updateRaceCar(raceCar2);
    updateFirstPlace(&race, raceCar1, raceCar2);
    printFirstPlaceAfterLap(race);
  }
  printCongratulation(race);
}

int main() {
  struct RaceCar raceCar1 = {"Indiana Jones", "Orange", 0};
  struct RaceCar raceCar2 = {"Marvin", "White", 0};

	srand(time(0));
  printIntro();
  printCountDown();
  startRace(&raceCar1, &raceCar2);
}
