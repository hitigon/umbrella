//
//  ChatListViewController.h
//  umbrella
//
//  Created by hitigon on 10/7/14.
//  Copyright (c) 2014 umbrella. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "Rooms.h"

@interface ChatListViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>{
}

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSArray *rooms;

- (NSArray *)readCoreData: (NSString *)entityName;
@end

