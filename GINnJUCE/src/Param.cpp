/*
==============================================================================

  This file was auto-generated by the GINnJUCE Transpiler. You're welcome!

==============================================================================
*/

#include "Param.h"

Param::Param() {
   initializeText();
   initializePaths();
   addAndMakeVisible(fill);
   addAndMakeVisible(percentText);
   addAndMakeVisible(outline);
   addAndMakeVisible(percentOutline);
   
}

Param::~Param() {

}

void Param::paint(Graphics& g) {

}

void Param::resized() {
   fill.setBounds(1, 1, 84, 85);
   percentText.setBounds(24, 30, 51, 26);
   outline.setBounds(0, 0, 87, 88);
   percentOutline.setBounds(0, 0, 87, 88);
}

void Param::initializeText() {
   // Text initialization for percentText
   Font percentTextFont(String("Myriad"), String("Myriad-Roman"), 22.4528369903564f);
   percentTextFont.setHorizontalScale(1.0f);
   percentText.setFont(percentTextFont);
   percentText.setColour(TextEditor::ColourIds::backgroundColourId, Colour(0x00000000));
   percentText.setColour(TextEditor::ColourIds::textColourId, Colour(0xfff1fafa));
   percentText.setColour(TextEditor::ColourIds::outlineColourId , Colour(0x00000000));
   percentText.setColour(TextEditor::ColourIds::focusedOutlineColourId , Colour(0x00000000));
   percentText.setColour(TextEditor::ColourIds::shadowColourId , Colour(0x00000000));
   percentText.setText(
      "75%\n"
   );
   percentText.moveCaretToTop(false);
   percentText.setCaretVisible(false);
   percentText.setReadOnly(true);
   percentText.setScrollbarsShown(false);
   percentText.setIndents(0, 0);
   percentText.setLineSpacing(1.20000003397965f);
   percentText.setMultiLine(true, false);
}

void Param::initializePaths() {
   // Path initialization for fill
   Path fillPath;
   fillPath.startNewSubPath(Point<float>(86.4990234375f, 43.9990234375f));
   fillPath.cubicTo(
      Point<float>(86.4990234375f, 67.47119140625f),
      Point<float>(67.4736328125f, 86.49853515625f),
      Point<float>(43.9990234375f, 86.49853515625f)
   );
   fillPath.cubicTo(
      Point<float>(20.5283203125f, 86.49853515625f),
      Point<float>(1.4990234375f, 67.47119140625f),
      Point<float>(1.4990234375f, 43.9990234375f)
   );
   fillPath.cubicTo(
      Point<float>(1.4990234375f, 20.5263671875f),
      Point<float>(20.5283203125f, 1.4990234375f),
      Point<float>(43.9990234375f, 1.4990234375f)
   );
   fillPath.cubicTo(
      Point<float>(67.4736328125f, 1.4990234375f),
      Point<float>(86.4990234375f, 20.5263671875f),
      Point<float>(86.4990234375f, 43.9990234375f)
   );
   fillPath.closeSubPath();
   const PathStrokeType fillStroke (1.0f, PathStrokeType::JointStyle::mitered, PathStrokeType::EndCapStyle::butt);
   const FillType fillFill (Colour(0xff424242));
   const FillType fillStrokeFill (Colour(0x00000000));
   fill.setPath(fillPath);
   fill.setStrokeType(fillStroke);
   fill.setFill(fillFill);
   fill.setStrokeFill(fillStrokeFill);
   
   // Path initialization for outline
   Path outlinePath;
   outlinePath.startNewSubPath(Point<float>(86.4990234375f, 43.9990234375f));
   outlinePath.cubicTo(
      Point<float>(86.4990234375f, 67.47119140625f),
      Point<float>(67.4736328125f, 86.49853515625f),
      Point<float>(43.9990234375f, 86.49853515625f)
   );
   outlinePath.cubicTo(
      Point<float>(20.5283203125f, 86.49853515625f),
      Point<float>(1.4990234375f, 67.47119140625f),
      Point<float>(1.4990234375f, 43.9990234375f)
   );
   outlinePath.cubicTo(
      Point<float>(1.4990234375f, 20.5263671875f),
      Point<float>(20.5283203125f, 1.4990234375f),
      Point<float>(43.9990234375f, 1.4990234375f)
   );
   outlinePath.cubicTo(
      Point<float>(67.4736328125f, 1.4990234375f),
      Point<float>(86.4990234375f, 20.5263671875f),
      Point<float>(86.4990234375f, 43.9990234375f)
   );
   outlinePath.closeSubPath();
   const PathStrokeType outlineStroke (3.0f, PathStrokeType::JointStyle::mitered, PathStrokeType::EndCapStyle::butt);
   const FillType outlineFill (Colour(0x00000000));
   const FillType outlineStrokeFill (Colour(0xff7d7c7a));
   outline.setPath(outlinePath);
   outline.setStrokeType(outlineStroke);
   outline.setFill(outlineFill);
   outline.setStrokeFill(outlineStrokeFill);
   
   // Path initialization for percentOutline
   Path percentOutlinePath;
   percentOutlinePath.startNewSubPath(Point<float>(43.9990234375f, 86.49853515625f));
   percentOutlinePath.cubicTo(
      Point<float>(20.5302734375f, 86.49853515625f),
      Point<float>(1.5009765625f, 67.47119140625f),
      Point<float>(1.5009765625f, 43.9990234375f)
   );
   percentOutlinePath.cubicTo(
      Point<float>(1.5009765625f, 20.5263671875f),
      Point<float>(20.5302734375f, 1.4990234375f),
      Point<float>(43.9990234375f, 1.4990234375f)
   );
   percentOutlinePath.cubicTo(
      Point<float>(67.4736328125f, 1.4990234375f),
      Point<float>(86.4990234375f, 20.5263671875f),
      Point<float>(86.4990234375f, 43.9990234375f)
   );
   const PathStrokeType percentOutlineStroke (3.0f, PathStrokeType::JointStyle::mitered, PathStrokeType::EndCapStyle::butt);
   const FillType percentOutlineFill (Colour(0x00000000));
   const FillType percentOutlineStrokeFill (Colour(0xfffaa916));
   percentOutline.setPath(percentOutlinePath);
   percentOutline.setStrokeType(percentOutlineStroke);
   percentOutline.setFill(percentOutlineFill);
   percentOutline.setStrokeFill(percentOutlineStrokeFill);
}
