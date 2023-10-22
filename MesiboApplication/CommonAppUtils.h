/******************************************************************************
* By accessing or copying this work, you agree to comply with the following   *
* terms:                                                                      *
*                                                                             *
* Copyright (c) 2019-2023 mesibo                                              *
* https://mesibo.com                                                          *
* All rights reserved.                                                        *
*                                                                             *
* Redistribution is not permitted. Use of this software is subject to the     *
* conditions specified at https://mesibo.com . When using the source code,    *
* maintain the copyright notice, conditions, disclaimer, and  links to mesibo * 
* website, documentation and the source code repository.                      *
*                                                                             *
* Do not use the name of mesibo or its contributors to endorse products from  *
* this software without prior written permission.                             *
*                                                                             *
* This software is provided "as is" without warranties. mesibo and its        *
* contributors are not liable for any damages arising from its use.           *
*                                                                             *
* Documentation: https://mesibo.com/documentation/                            *
*                                                                             *
* Source Code Repository: https://github.com/mesibo/                          *
*******************************************************************************/

//
//  MesiboCommonUtils.h
//  ProfileView
//
//  Created by Mesibo on 09/11/17.
//  Copyright © 2018 Mesibo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface CommonAppUtils : NSObject



+ (UIImage*) getBitmapFromFile:(NSString*) checkFile;
+ (BOOL) isImageFile:(NSString*) filePath ;
+ (UIImage *) profileThumbnailImageFromURL:(NSURL *)videoURL;
+ (UIStoryboard *)getMeProfileStoryBoard ;
+ (UIStoryboard *) getMeMesiboStoryBoard ;
+ (NSBundle *)getBundle ;


+ (UIImage *)imageNamed:(NSString *)imageName;
+ (NSString*) getDefaultGroupProfilePath ;
+ (NSString*) getDefaultProfilePath;
+ (UIStoryboard *)getMeSettingsStoryBoard ;
+(void)shareText:(NSString *)textToShare parent:(UIViewController *)parent;

+ (void)styleLight:(UIView *)view;
@end
