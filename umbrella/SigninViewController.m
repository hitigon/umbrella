//
//  SigninViewController.m
//  umbrella
//
//  Created by hitigon on 10/8/14.
//  Copyright (c) 2014 umbrella. All rights reserved.
//

#import "SigninViewController.h"
#import "Rooms.h"

@interface SigninViewController ()

@end

@implementation SigninViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    AppDelegate *appDelegate = [[UIApplication sharedApplication] delegate];
    self.managedObjectContext = appDelegate.managedObjectContext;

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}


#pragma mark - Navigation

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
    NSString *name = self.username.text;
    NSError *error = nil;
    
    User *userModel = (User *)[NSEntityDescription insertNewObjectForEntityForName:@"User" inManagedObjectContext:self.managedObjectContext];
    [userModel setUsername:name];
    
    
    for (int i = 0; i < 5; i++) {
        Rooms *roomsModel = (Rooms *)[NSEntityDescription insertNewObjectForEntityForName:@"Rooms" inManagedObjectContext:self.managedObjectContext];
        [roomsModel setName:[NSString stringWithFormat:@"Chatting Room %d", i]];
        [roomsModel setAdded_time: [NSDate date]];
    }

    if (![self.managedObjectContext save:&error]) {
        NSLog(@"Core Data Save Error [User]: %@", error);
    }
}


@end
