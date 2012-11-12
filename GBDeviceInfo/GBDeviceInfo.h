//
//  GBDeviceInfo.h
//  GBDeviceInfo
//
//  Created by Luka Mirosevic on 16/10/2012.
//  Copyright (c) 2012 Luka Mirosevic. All rights reserved.
//
//  This software is licensed under the terms of the GNU General Public License.
//  http://www.gnu.org/licenses/

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface GBDeviceInfo : NSObject

//defs
typedef enum {
    GBDeviceModelUnknown = 0,
    GBDeviceModeliPhone,
    GBDeviceModeliPhone3G,
    GBDeviceModeliPhone3GS,
    GBDeviceModeliPhone4,
    GBDeviceModeliPhone4S,
    GBDeviceModeliPhone5,
    GBDeviceModeliPad,
    GBDeviceModeliPad2,
    GBDeviceModeliPad3,
    GBDeviceModeliPad4,
    GBDeviceModeliPadMini,
    GBDeviceModeliPod,
    GBDeviceModeliPod2,
    GBDeviceModeliPod3,
    GBDeviceModeliPod4,
    GBDeviceModeliPod5,
} GBDeviceModel;

typedef enum {
    GBDeviceFamilyUnknown = 0,
    GBDeviceFamilyiPhone,
    GBDeviceFamilyiPad,
    GBDeviceFamilyiPod,
} GBDeviceFamily;

typedef enum {
    GBDeviceDisplayUnknown = 0,
    GBDeviceDisplayiPad,
    GBDeviceDisplayiPhone35Inch,
    GBDeviceDisplayiPhone4Inch,
} GBDeviceDisplay;

typedef struct {
    GBDeviceModel           model;
    GBDeviceFamily          family;
    GBDeviceDisplay         display;
    NSUInteger              bigModel;
    NSUInteger              smallModel;
    NSUInteger              iOSVersion;
} GBDeviceDetails;

//public API
+(GBDeviceDetails)deviceDetails;
+(NSString *)rawSystemInfoString;

@end