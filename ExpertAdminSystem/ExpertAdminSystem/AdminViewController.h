//
//  AdminViewController.h
//  ExpertAdminSystem
//
//  Created by P. Chu on 8/19/16.
//  Copyright © 2016 PDC. All rights reserved.
//

#import <UIKit/UIKit.h>
@import FirebaseAuth;

@interface AdminViewController : UIViewController


@property(nonatomic) FIRUser* user;
@end
