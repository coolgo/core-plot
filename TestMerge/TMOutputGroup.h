//
//  TMOutputGroup.h
//  TestMerge
//
//  Created by Barry Wark on 5/27/09.
//  Copyright 2009 Barry Wark. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@protocol TMOutputGroup

@property (retain) NSDate * date;
@property (retain) NSString * extension;
@property (retain) NSString * failureDiffPath;
@property (retain) NSString * name;
@property (retain) NSString * outputPath;
@property (retain) NSString * referencePath;

@end
