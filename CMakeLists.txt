cmake_minimum_required(VERSION 3.19)
project(GameAIByExample_Exercise2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MFC_FLAG 2)

add_executable(  GameAIByExample_Exercise2 WIN32 main.cpp BaseGameEntity.h constants.h EntityFunctionTemplates.h GameWorld.cpp GameWorld.h MovingEntity.h Obstacle.cpp Obstacle.h ParamLoader.cpp ParamLoader.h Path.cpp Path.h resource.h SteeringBehaviors.cpp SteeringBehaviors.h Vehicle.cpp Vehicle.h CellSpacePartition.h utils.h Time/CrudeTimer.cpp Time/CrudeTimer.h Time/PrecisionTimer.h Time/PrecisionTimer.cpp misc/Cgdi.h misc/Cgdi.cpp misc/WindowUtils.h misc/WindowUtils.cpp misc/utils.h misc/iniFileLoaderBase.cpp misc/iniFileLoaderBase.h)
