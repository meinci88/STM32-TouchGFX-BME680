/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1VIEWBASE_HPP
#define SCREEN1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/graph/GraphScroll.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/graph/GraphLabels.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/containers/progress_indicators/LineProgress.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565Bitmap.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class Screen1ViewBase : public touchgfx::View<Screen1Presenter>
{
public:
    Screen1ViewBase();
    virtual ~Screen1ViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image image1;
    touchgfx::ButtonWithIcon Sc1_button_1;
    touchgfx::GraphScroll<100> dynamicGraph1;
    touchgfx::GraphElementGridX dynamicGraph1MinorXAxisGrid;
    touchgfx::GraphElementGridY dynamicGraph1MinorYAxisGrid;
    touchgfx::GraphElementGridX dynamicGraph1MajorXAxisGrid;
    touchgfx::GraphElementGridY dynamicGraph1MajorYAxisGrid;
    touchgfx::GraphLabelsY dynamicGraph1MajorYAxisLabel;
    touchgfx::GraphElementLine dynamicGraph1Line1;
    touchgfx::PainterRGB565 dynamicGraph1Line1Painter;
    touchgfx::ButtonWithIcon Sc1_button;
    touchgfx::LineProgress lineProgress1;
    touchgfx::PainterRGB565Bitmap lineProgress1Painter;
    touchgfx::TextAreaWithOneWildcard textArea_Value;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA_VALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textArea_ValueBuffer[TEXTAREA_VALUE_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 12000;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen1ViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREEN1VIEWBASE_HPP
