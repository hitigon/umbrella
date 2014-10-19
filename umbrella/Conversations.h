//
//  Conversations.h
//  umbrella
//
//  Created by hitigon on 10/18/14.
//  Copyright (c) 2014 umbrella. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Connections;

@interface Conversations : NSManagedObject

@property (nonatomic, retain) NSString * content;
@property (nonatomic, retain) NSDate * added_time;
@property (nonatomic, retain) NSManagedObject *room;
@property (nonatomic, retain) Connections *user;

@end
