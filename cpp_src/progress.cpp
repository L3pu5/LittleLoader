#include <string>
#include <cmath>

const std::string progressCharacterMap = "\xB0\xB1\xB2\xDB";

std::string make_progress_bar(int width, float percentage){
    percentage = percentage / 100;
    int width_sans_padding = width - 2;
    int chunks = progressCharacterMap.length() * width_sans_padding;
    int end_chunk = std::floor(percentage*chunks);
    div_t end_and_progress = std::div(end_chunk, progressCharacterMap.length());
    std::string output = "[";
    for (size_t i = 0; i < end_and_progress.quot; i++)
    {
        output += (progressCharacterMap[progressCharacterMap.length() -1]);

    }
    output += progressCharacterMap[end_and_progress.rem];
    for (size_t i = 0; i < width_sans_padding - end_and_progress.quot - 1; i++)
    {
        output += " ";
    }
    output += "]";
    return output;
}