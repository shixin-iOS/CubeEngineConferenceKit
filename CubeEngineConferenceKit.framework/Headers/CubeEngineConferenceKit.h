//
//  CubeEngineConferenceKit.h
//  CubeEngineConferenceKit
//
//  Created by jianchengpan on 2019/4/9.
//  Copyright © 2019 CubeTeam. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for CubeEngineConferenceKit.
FOUNDATION_EXPORT double CubeEngineConferenceKitVersionNumber;

//! Project version string for CubeEngineConferenceKit.
FOUNDATION_EXPORT const unsigned char CubeEngineConferenceKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <CubeEngineConferenceKit/PublicHeader.h>


#pragma - mark dependence
#import <CubeEngineMediaKit/CubeEngineMediaKit.h>



#pragma - mark conference service

//model
#import <CubeEngineConferenceKit/CubeConference.h>
#import <CubeEngineConferenceKit/CubeMemberStatus.h>
#import <CubeEngineConferenceKit/CubeConferenceControl.h>
#import <CubeEngineConferenceKit/CubeConferenceConfig.h>

//enum
#import <CubeEngineConferenceKit/CubeControlAction.h>

// util
#import <CubeEngineConferenceKit/CubeConferenceUtil.h>
