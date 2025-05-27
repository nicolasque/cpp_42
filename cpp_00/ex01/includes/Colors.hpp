/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colors.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 01:15:30 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/28 01:15:33 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef COLORS_HPP
#define COLORS_HPP

// Reset
#define RESET "\033[0m"

// Regular Text Colors
#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"

// Bold Text Colors
#define BOLD_BLACK "\033[1;30m"
#define BOLD_RED "\033[1;31m"
#define BOLD_GREEN "\033[1;32m"
#define BOLD_YELLOW "\033[1;33m"
#define BOLD_BLUE "\033[1;34m"
#define BOLD_MAGENTA "\033[1;35m"
#define BOLD_CYAN "\033[1;36m"
#define BOLD_WHITE "\033[1;37m"

// Underline Text Colors
#define UNDERLINE_BLACK "\033[4;30m"
#define UNDERLINE_RED "\033[4;31m"
#define UNDERLINE_GREEN "\033[4;32m"
#define UNDERLINE_YELLOW "\033[4;33m"
#define UNDERLINE_BLUE "\033[4;34m"
#define UNDERLINE_MAGENTA "\033[4;35m"
#define UNDERLINE_CYAN "\033[4;36m"
#define UNDERLINE_WHITE "\033[4;37m"

// Background Colors
#define BG_BLACK "\033[40m"
#define BG_RED "\033[41m"
#define BG_GREEN "\033[42m"
#define BG_YELLOW "\033[43m"
#define BG_BLUE "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_CYAN "\033[46m"
#define BG_WHITE "\033[47m"

// High Intensity Text Colors (Bright)
#define BRIGHT_BLACK "\033[0;90m"
#define BRIGHT_RED "\033[0;91m"
#define BRIGHT_GREEN "\033[0;92m"
#define BRIGHT_YELLOW "\033[0;93m"
#define BRIGHT_BLUE "\033[0;94m"
#define BRIGHT_MAGENTA "\033[0;95m"
#define BRIGHT_CYAN "\033[0;96m"
#define BRIGHT_WHITE "\033[0;97m"

// Bold High Intensity Text Colors
#define BOLD_BRIGHT_BLACK "\033[1;90m"
#define BOLD_BRIGHT_RED "\033[1;91m"
#define BOLD_BRIGHT_GREEN "\033[1;92m"
#define BOLD_BRIGHT_YELLOW "\033[1;93m"
#define BOLD_BRIGHT_BLUE "\033[1;94m"
#define BOLD_BRIGHT_MAGENTA "\033[1;95m"
#define BOLD_BRIGHT_CYAN "\033[1;96m"
#define BOLD_BRIGHT_WHITE "\033[1;97m"

// High Intensity Background Colors
#define BG_BRIGHT_BLACK "\033[0;100m"
#define BG_BRIGHT_RED "\033[0;101m"
#define BG_BRIGHT_GREEN "\033[0;102m"
#define BG_BRIGHT_YELLOW "\033[0;103m"
#define BG_BRIGHT_BLUE "\033[0;104m"
#define BG_BRIGHT_MAGENTA "\033[0;105m"
#define BG_BRIGHT_CYAN "\033[0;106m"
#define BG_BRIGHT_WHITE "\033[0;107m"

// Text Styles
#define STYLE_BOLD "\033[1m"
#define STYLE_DIM "\033[2m" // Faint
#define STYLE_ITALIC "\033[3m"
#define STYLE_UNDERLINE "\033[4m"
#define STYLE_BLINK_SLOW "\033[5m" // Less than 150 per minute
#define STYLE_BLINK_RAPID "\033[6m" // More than 150 per minute (rarely supported)
#define STYLE_REVERSE "\033[7m" // Swap foreground and background
#define STYLE_HIDDEN "\033[8m" // Conceal
#define STYLE_STRIKETHROUGH "\033[9m"

// Reset specific styles
#define RESET_BOLD_DIM "\033[22m"
#define RESET_ITALIC "\033[23m"
#define RESET_UNDERLINE "\033[24m"
#define RESET_BLINK "\033[25m"
#define RESET_REVERSE "\033[27m"
#define RESET_HIDDEN "\033[28m"
#define RESET_STRIKETHROUGH "\033[29m"

/*
 * How to use:
 * std::cout << RED << "This text is red." << RESET << std::endl;
 * std::cout << BOLD_BLUE << BG_YELLOW << "Bold blue text on yellow background." << RESET << std::endl;
 *
 * Note: ANSI escape codes might not be supported by all terminal emulators.
 * Windows Command Prompt قدیمی ممکن است نیاز به فعال سازی داشته باشد یا از کتابخانه های جانبی استفاده کند.
 * Windows Terminal, Linux terminals, and macOS Terminal generally support these well.
 */

#endif // COLORS_HPP