class CfgAmmo {
    class M_NLAW_AT_F;
    class ACE_NLAW: M_NLAW_AT_F {
        irLock = 0;
        laserLock = 0;
        // manualControl = 0;

        class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = QGVAR(seeker);
            seekerTypes[] = {QGVAR(seeker)};

            defaultSeekerLockMode = "LOAL";
            seekerLockModes[] = { "LOAL", "LOBL" };

            seekLastTargetPos = 0;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 70;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 5000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = QGVAR(attackProfile);
            attackProfiles[] = {QGVAR(attackProfile)};
        };
    };
};