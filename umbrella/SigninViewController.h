//
//  SigninViewController.h
//  umbrella
//
//  Created by hitigon on 10/8/14.
//  Copyright (c) 2014 umbrella. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "User.h"

@interface SigninViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *username;

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

@end
