/*
 * Copyright (c) 2012-2017 scott.cgi All Rights Reserved.
 *
 * This code is licensed under the MIT License.
 *
 * Since  : 2013-1-21
 * Author : scott.cgi
 * Version: 0.0.0
 */

#ifndef PARTICLE_H
#define PARTICLE_H


#include <stdbool.h>
#include "Engine/Graphics/OpenGL/SubMesh.h"


typedef struct
{
    bool     isActive;

    float    life;
    float    currentLife;

    float    scale;
    float    scaleDiff;

    float    rotationZ;
    float    rotationDiff;

    float    velocity;
    float    velocityDiff;

    float    angle;
    float    angleDiff;

    float    transparency;
    float    transparencyDiff;

    float    wind;
    float    windDiff;

    float    gravity;
    float    gravityDiff;
    SubMesh* subMesh;
}
Particle;


struct AParticle
{
    /**
     * Initialize Particle that memory has already allocated
     */
    void      (*Init) (SubMesh* subMesh, Particle* outParticle);

    /**
     * Reset Particle property values to the born
     */
    void      (*Reset)(Particle* particle);
};


extern struct AParticle AParticle[1];


#endif
