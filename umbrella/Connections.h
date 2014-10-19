//
//  Connections.h
//  umbrella
//
//  Created by hitigon on 10/18/14.
//  Copyright (c) 2014 umbrella. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Connections : NSManagedObject

@property (nonatomic, retain) NSDate * added_time;
@property (nonatomic, retain) NSNumber * uuid;
@property (nonatomic, retain) NSString * username;
@property (nonatomic, retain) NSNumber * type;

@end
