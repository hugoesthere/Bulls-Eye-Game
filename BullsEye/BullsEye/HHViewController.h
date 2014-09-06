//
//  HHViewController.h
//  BullsEye
//
//  Created by Hugo Ho on 9/3/14.
//  Copyright (c) 2014 Hugo Ho. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HHViewController : UIViewController <UIAlertViewDelegate>

@property (nonatomic, weak) IBOutlet UISlider *slider;
@property (nonatomic, weak) IBOutlet UILabel *targetLabel;
@property (nonatomic, weak) IBOutlet UILabel *scoreLabel;
@property (nonatomic, weak) IBOutlet UILabel *roundLabel;

- (IBAction)showAlert;
- (IBAction)sliderMoved:(UISlider *)slider;
- (IBAction)startOver;

@end
