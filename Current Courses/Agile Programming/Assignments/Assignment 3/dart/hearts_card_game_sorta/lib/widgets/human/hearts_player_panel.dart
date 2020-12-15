import 'package:flutter/material.dart';
import 'package:hearts_card_game_sorta/constants.dart';
import 'package:hearts_card_game_sorta/labels/button_label.dart';
import 'package:hearts_card_game_sorta/labels/human_label.dart';

class HeartsPlayerPanel extends StatelessWidget {
  const HeartsPlayerPanel({
    Key key,
    @required this.flex,
    @required this.backgroundColor,
    @required this.memberKind,
  }) : super(key: key);

  final int flex;
  final String backgroundColor;
  final String memberKind;

  @override
  Widget build(BuildContext context) {
    return Expanded(
      flex: flex,
      child: Card(
        color: coolors[backgroundColor],
        shape: RoundedRectangleBorder(
          borderRadius: BorderRadius.circular(20.0),
        ),
        elevation: 20.0,
        child: Padding(
          padding: EdgeInsets.all(20.0),
          child: Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            mainAxisSize: MainAxisSize.max,
            crossAxisAlignment: CrossAxisAlignment.stretch,
            children: [
              HumanLabel(
                flex: 1,
                text: memberKind,
              ),
              SizedBox(
                width: 20.0,
              ),
              Expanded(
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                  mainAxisSize: MainAxisSize.max,
                  crossAxisAlignment: CrossAxisAlignment.stretch,
                  children: [
                    ButtonLabel(
                      flex: 1,
                      text: "Introduce",
                    ),
                    SizedBox(
                      height: 20.0,
                    ),
                    ButtonLabel(
                      flex: 1,
                      text: "Show hand",
                    ),
                  ],
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
