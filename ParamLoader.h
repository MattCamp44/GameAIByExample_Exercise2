//
// Created by mattc on 11/23/2021.
//

#ifndef GAMEAIBYEXAMPLE_EXERCISE2_PARAMLOADER_H
#define GAMEAIBYEXAMPLE_EXERCISE2_PARAMLOADER_H

//-----------------------------------------------------------------------------
//
//  Name:   ParamLoader.h
//
//  Author: Mat Buckland (www.ai-junkie.com)
//
//  Desc:   class to parse a parameter file for the steering behavior project
//-----------------------------------------------------------------------------
#include "constants.h"
#include "misc/iniFileLoaderBase.h"
#include "misc/utils.h"



#define Prm (*ParamLoader::Instance())


class ParamLoader : public iniFileLoaderBase
{
private:

    ParamLoader():iniFileLoaderBase("params.ini")
    {
        NumAgents               = 300;
        NumObstacles            = 7;
        MinObstacleRadius       = 10;
        MaxObstacleRadius       = 30;

        NumCellsX               = 7;
        NumCellsY               = 7;

        NumSamplesForSmoothing  = 10;

        SteeringForceTweaker    = 200.0;
        MaxSteeringForce        = 2.0 * SteeringForceTweaker;
        MaxSpeed                = 150.0;
        VehicleMass             = 1.0;
        VehicleScale            = 3.0;

        SeparationWeight        = 1.0 * SteeringForceTweaker;
        AlignmentWeight         = 1.0 * SteeringForceTweaker;
        CohesionWeight          = 2.0 * SteeringForceTweaker;
        ObstacleAvoidanceWeight = 10.0 * SteeringForceTweaker;
        WallAvoidanceWeight     = 10.0 * SteeringForceTweaker;
        WanderWeight            = 1.0 * SteeringForceTweaker;
        SeekWeight              = 1.0 * SteeringForceTweaker;
        FleeWeight              = 1.0 * SteeringForceTweaker;
        ArriveWeight            = 1.0 * SteeringForceTweaker;
        PursuitWeight           = 1.0 * SteeringForceTweaker;
        OffsetPursuitWeight     = 1.0 * SteeringForceTweaker;
        InterposeWeight         = 1.0 * SteeringForceTweaker;
        HideWeight              = 1.0 * SteeringForceTweaker;
        EvadeWeight             = 0.01 * SteeringForceTweaker;
        FollowPathWeight        = 0.05 * SteeringForceTweaker;

        ViewDistance            = 50.0;
        MinDetectionBoxLength   = 40.0;
        WallDetectionFeelerLength=40.0;

        prWallAvoidance         = 0.5;
        prObstacleAvoidance     = 0.5;
        prSeparation            = 0.2;
        prAlignment             = 0.3;
        prCohesion              = 0.6;
        prWander                = 0.8;
        prSeek                  = 0.8;
        prFlee                  = 0.6;
        prEvade                 = 1.0;
        prHide                  = 0.8;
        prArrive                = 0.5;

        MaxTurnRatePerSecond    = Pi;
    }

public:

    static ParamLoader* Instance();

    int	NumAgents;
    int	NumObstacles;
    double MinObstacleRadius;
    double MaxObstacleRadius;

    //number of horizontal cells used for spatial partitioning
    int   NumCellsX;
    //number of vertical cells used for spatial partitioning
    int   NumCellsY;

    //how many samples the smoother will use to average a value
    int   NumSamplesForSmoothing;

    //used to tweak the combined steering force (simply altering the MaxSteeringForce
    //will NOT work!This tweaker affects all the steering force multipliers
    //too).
    double SteeringForceTweaker;

    double MaxSteeringForce;
    double MaxSpeed;
    double VehicleMass;

    double VehicleScale;
    double MaxTurnRatePerSecond;

    double SeparationWeight;
    double AlignmentWeight ;
    double CohesionWeight  ;
    double ObstacleAvoidanceWeight;
    double WallAvoidanceWeight;
    double WanderWeight    ;
    double SeekWeight      ;
    double FleeWeight      ;
    double ArriveWeight    ;
    double PursuitWeight   ;
    double OffsetPursuitWeight;
    double InterposeWeight ;
    double HideWeight      ;
    double EvadeWeight     ;
    double FollowPathWeight;

    //how close a neighbour must be before an agent perceives it (considers it
    //to be within its neighborhood)
    double ViewDistance;

    //used in obstacle avoidance
    double MinDetectionBoxLength;

    //used in wall avoidance
    double WallDetectionFeelerLength;

    //these are the probabilities that a steering behavior will be used
    //when the prioritized dither calculate method is used
    double prWallAvoidance;
    double prObstacleAvoidance;
    double prSeparation;
    double prAlignment;
    double prCohesion;
    double prWander;
    double prSeek;
    double prFlee;
    double prEvade;
    double prHide;
    double prArrive;

};



#endif //GAMEAIBYEXAMPLE_EXERCISE2_PARAMLOADER_H
