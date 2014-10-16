/**
 * nInvaders - a space invaders clone for ncurses
 * Copyright (C) 2002-2003 Dettus
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 * homepage: http://ninvaders.sourceforge.net
 * mailto: ninvaders-devel@lists.sourceforge.net
 *
 */
 
 
#include <stdio.h>
#include <unistd.h>
#include "globals.h"


#define MAJOR    0
#define MINOR    1
#define RELEASE  1



#ifdef WIN32
#define usleep(x) Sleep(x/1000)
#endif


/**
 * sleep for specified time
 */
void doSleep(int microseconds)
{
        usleep(microseconds);
}


/**
 * show version information
 */
void showVersion()
{
	fprintf(stderr, "*** nInvaders %i.%i.%i\n", MAJOR, MINOR, RELEASE);
	fprintf(stderr, "*** (C)opyleft 2k2 by Dettus\n");
	fprintf(stderr, "*** dettus@matrixx-bielefeld.de\n");
	fprintf(stderr, "Additional code by Mike Saarna,\n");
	fprintf(stderr, "Sebastian Gutsfeld -> segoh@gmx.net,\n");
	fprintf(stderr, "Alexander Hollinger -> alexander.hollinger@gmx.net and\n");
	fprintf(stderr, "Matthias Thar -> hiast2@compuserve.de\n");
}


/**
 * show usage of command line parameters
 */
void showUsage()
{

	fprintf(stderr, "\n\nUsage: nInvaders [-l skill] [-gpl]\n");
	fprintf(stderr, "   where -l 0=NIGHTMARE\n");
	fprintf(stderr, "         -l 1=okay\n");
	fprintf(stderr, "         -l 9=May I play daddy?!\n");
	fprintf(stderr, "\n         -gpl shows you the license file\n");
}


/**
 * wait for input of return to continue
 */
void waitForReturn()
{
	char b[2];
	fprintf(stderr, "...Please press <Enter> to read on...");
	fgets(b, sizeof(b), stdin);
}

/**
 * show short version of Gnu GPL
 */
void showGplShort()
{
	fprintf(stderr,"\n");
	fprintf(stderr,"This program is free software; you can redistribute it and/or modify\n");
	fprintf(stderr,"it under the terms of the GNU General Public License as published by\n");
	fprintf(stderr,"the Free Software Foundation; either version 2 of the License, or\n");
	fprintf(stderr,"(at your option) any later version.\n");
	fprintf(stderr,"\n");
	fprintf(stderr,"This program is distributed in the hope that it will be useful,\n");
	fprintf(stderr,"but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
	fprintf(stderr,"MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n");
	fprintf(stderr,"GNU General Public License for more details.\n");
	fprintf(stderr,"\n");
	fprintf(stderr,"You should have received a copy of the GNU General Public License\n");
	fprintf(stderr,"along with this program; if not, write to the Free Software\n");
	fprintf(stderr,"Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA\n");
	fprintf(stderr,"\n");
	fprintf(stderr,"Use the -gpl  command line switch to see the full license of this program\n");
	fprintf(stderr,"Use the -help command line switch to see who wrote this program \n");
	fprintf(stderr,"\n");
}

/**
 * show GNU GENERAL PUBLIC LICENSE
 */
void showGpl()
{
	fprintf(stderr, "\n");
	fprintf(stderr, "		    GNU GENERAL PUBLIC LICENSE\n");
	fprintf(stderr, "		       Version 2, June 1991\n");
	fprintf(stderr, "\n");
	fprintf(stderr, " Copyright (C) 1989, 1991 Free Software Foundation, Inc.\n");
	fprintf(stderr, " 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA\n");
	fprintf(stderr, " Everyone is permitted to copy and distribute verbatim copies\n");
	fprintf(stderr, " of this license document, but changing it is not allowed.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "			    Preamble\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  The licenses for most software are designed to take away your\n");
	fprintf(stderr, "freedom to share and change it.  By contrast, the GNU General Public\n");
	fprintf(stderr, "License is intended to guarantee your freedom to share and change free \n");
	fprintf(stderr, "software--to make sure the software is free for all its users. This\n");
	fprintf(stderr, "General Public License applies to most of the Free Software\n");
	fprintf(stderr, "Foundation's software and to any other program whose authors commit to\n");
	fprintf(stderr, "using it.  (Some other Free Software Foundation software is covered by\n");
	fprintf(stderr, "the GNU Library General Public License instead.)  You can apply it to\n");
	fprintf(stderr, "your programs, too.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  When we speak of free software, we are referring to freedom, not\n");
	fprintf(stderr, "price.  Our General Public Licenses are designed to make sure that you\n");
	fprintf(stderr, "have the freedom to distribute copies of free software (and charge for\n");
	fprintf(stderr, "\n");
	
		waitForReturn();
		
	fprintf(stderr, "this service if you wish), that you receive source code or can get it\n");
	fprintf(stderr, "if you want it, that you can change the software or use pieces of it\n");
	fprintf(stderr, "in new free programs; and that you know you can do these things.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  To protect your rights, we need to make restrictions that forbid\n");
	fprintf(stderr, "anyone to deny you these rights or to ask you to surrender the rights.\n");
	fprintf(stderr, "These restrictions translate to certain responsibilities for you if you\n");
	fprintf(stderr, "distribute copies of the software, or if you modify it.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  For example, if you distribute copies of such a program, whether\n");
	fprintf(stderr, "gratis or for a fee, you must give the recipients all the rights that\n");
	fprintf(stderr, "you have.  You must make sure that they, too, receive or can get the\n");
	fprintf(stderr, "source code.  And you must show them these terms so they know their\n");
	fprintf(stderr, "rights.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  We protect your rights with two steps: (1) copyright the software, and\n");
	fprintf(stderr, "(2) offer you this license which gives you legal permission to copy,\n");
	fprintf(stderr, "distribute and/or modify the software.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  Also, for each author's protection and ours, we want to make certain\n");
	fprintf(stderr, "that everyone understands that there is no warranty for this free\n");
	fprintf(stderr, "software.  If the software is modified by someone else and passed on, we\n");
	fprintf(stderr, "want its recipients to know that what they have is not the original, so\n");
	fprintf(stderr, "\n");
	
		waitForReturn();
		
	fprintf(stderr, "\n");
	fprintf(stderr, "that any problems introduced by others will not reflect on the original\n");
	fprintf(stderr, "authors' reputations.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  Finally, any free program is threatened constantly by software\n");
	fprintf(stderr, "patents.  We wish to avoid the danger that redistributors of a free\n");
	fprintf(stderr, "program will individually obtain patent licenses, in effect making the\n");
	fprintf(stderr, "program proprietary.  To prevent this, we have made it clear that any\n");
	fprintf(stderr, "patent must be licensed for everyone's free use or not licensed at all.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  The precise terms and conditions for copying, distribution and\n");
	fprintf(stderr, "modification follow.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "		    GNU GENERAL PUBLIC LICENSE\n");
	fprintf(stderr, "   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  0. This License applies to any program or other work which contains\n");
	fprintf(stderr, "a notice placed by the copyright holder saying it may be distributed\n");
	fprintf(stderr, "under the terms of this General Public License.  The 'Program', below,\n");
	fprintf(stderr, "refers to any such program or work, and a 'work based on the Program'\n");
	fprintf(stderr, "means either the Program or any derivative work under copyright law:\n");
	fprintf(stderr, "that is to say, a work containing the Program or a portion of it,\n");
	fprintf(stderr, "either verbatim or with modifications and/or translated into another\n");
	fprintf(stderr, "language.  (Hereinafter, translation is included without limitation in\n");
	fprintf(stderr, "\n");
	
		waitForReturn();
	
	fprintf(stderr, "\n");
	fprintf(stderr, "the term 'modification'.)  Each licensee is addressed as 'you'.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "Activities other than copying, distribution and modification are not\n");
	fprintf(stderr, "covered by this License; they are outside its scope.  The act of\n");
	fprintf(stderr, "running the Program is not restricted, and the output from the Program\n");
	fprintf(stderr, "is covered only if its contents constitute a work based on the\n");
	fprintf(stderr, "Program (independent of having been made by running the Program).\n");
	fprintf(stderr, "Whether that is true depends on what the Program does.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  1. You may copy and distribute verbatim copies of the Program's\n");
	fprintf(stderr, "source code as you receive it, in any medium, provided that you\n");
	fprintf(stderr, "conspicuously and appropriately publish on each copy an appropriate\n");
	fprintf(stderr, "copyright notice and disclaimer of warranty; keep intact all the\n");
	fprintf(stderr, "notices that refer to this License and to the absence of any warranty;\n");
	fprintf(stderr, "and give any other recipients of the Program a copy of this License\n");
	fprintf(stderr, "along with the Program.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "You may charge a fee for the physical act of transferring a copy, and\n");
	fprintf(stderr, "you may at your option offer warranty protection in exchange for a fee.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  2. You may modify your copy or copies of the Program or any portion\n");
	fprintf(stderr, "of it, thus forming a work based on the Program, and copy and\n");
	fprintf(stderr, "distribute such modifications or work under the terms of Section 1\n");
	fprintf(stderr, "\n");
	
		waitForReturn();
	
	fprintf(stderr, "\n");
	fprintf(stderr, "above, provided that you also meet all of these conditions:\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "    a) You must cause the modified files to carry prominent notices\n");
	fprintf(stderr, "    stating that you changed the files and the date of any change.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "    b) You must cause any work that you distribute or publish, that in\n");
	fprintf(stderr, "    whole or in part contains or is derived from the Program or any\n");
	fprintf(stderr, "    part thereof, to be licensed as a whole at no charge to all third\n");
	fprintf(stderr, "    parties under the terms of this License.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "    c) If the modified program normally reads commands interactively\n");
	fprintf(stderr, "    when run, you must cause it, when started running for such\n");
	fprintf(stderr, "    interactive use in the most ordinary way, to print or display an\n");
	fprintf(stderr, "    announcement including an appropriate copyright notice and a\n");
	fprintf(stderr, "    notice that there is no warranty (or else, saying that you provide\n");
	fprintf(stderr, "    a warranty) and that users may redistribute the program under\n");
	fprintf(stderr, "    these conditions, and telling the user how to view a copy of this\n");
	fprintf(stderr, "    License.  (Exception: if the Program itself is interactive but\n");
	fprintf(stderr, "    does not normally print such an announcement, your work based on\n");
	fprintf(stderr, "    the Program is not required to print an announcement.)\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "These requirements apply to the modified work as a whole.  If\n");
	fprintf(stderr, "identifiable sections of that work are not derived from the Program,\n");
	fprintf(stderr, "\n");
	
		waitForReturn();
		
	fprintf(stderr, "\n");
	fprintf(stderr, "and can be reasonably considered independent and separate works in\n");
	fprintf(stderr, "themselves, then this License, and its terms, do not apply to those\n");
	fprintf(stderr, "sections when you distribute them as separate works.  But when you\n");
	fprintf(stderr, "distribute the same sections as part of a whole which is a work based\n");
	fprintf(stderr, "on the Program, the distribution of the whole must be on the terms of\n");
	fprintf(stderr, "this License, whose permissions for other licensees extend to the\n");
	fprintf(stderr, "entire whole, and thus to each and every part regardless of who wrote it.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "Thus, it is not the intent of this section to claim rights or contest\n");
	fprintf(stderr, "your rights to work written entirely by you; rather, the intent is to\n");
	fprintf(stderr, "exercise the right to control the distribution of derivative or\n");
	fprintf(stderr, "collective works based on the Program.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "In addition, mere aggregation of another work not based on the Program\n");
	fprintf(stderr, "with the Program (or with a work based on the Program) on a volume of\n");
	fprintf(stderr, "a storage or distribution medium does not bring the other work under\n");
	fprintf(stderr, "the scope of this License.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  3. You may copy and distribute the Program (or a work based on it,\n");
	fprintf(stderr, "under Section 2) in object code or executable form under the terms of\n");
	fprintf(stderr, "Sections 1 and 2 above provided that you also do one of the following:\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "    a) Accompany it with the complete corresponding machine-readable\n");
	fprintf(stderr, "\n");
	
		waitForReturn();
	
	fprintf(stderr, "\n");
	fprintf(stderr, "    source code, which must be distributed under the terms of Sections\n");
	fprintf(stderr, "    1 and 2 above on a medium customarily used for software interchange; or,\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "    b) Accompany it with a written offer, valid for at least three\n");
	fprintf(stderr, "    years, to give any third party, for a charge no more than your\n");
	fprintf(stderr, "    cost of physically performing source distribution, a complete\n");
	fprintf(stderr, "    machine-readable copy of the corresponding source code, to be\n");
	fprintf(stderr, "    distributed under the terms of Sections 1 and 2 above on a medium\n");
	fprintf(stderr, "    customarily used for software interchange; or,\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "    c) Accompany it with the information you received as to the offer\n");
	fprintf(stderr, "    to distribute corresponding source code.  (This alternative is\n");
	fprintf(stderr, "    allowed only for noncommercial distribution and only if you\n");
	fprintf(stderr, "    received the program in object code or executable form with such\n");
	fprintf(stderr, "    an offer, in accord with Subsection b above.)\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "The source code for a work means the preferred form of the work for\n");
	fprintf(stderr, "making modifications to it.  For an executable work, complete source\n");
	fprintf(stderr, "code means all the source code for all modules it contains, plus any\n");
	fprintf(stderr, "associated interface definition files, plus the scripts used to\n");
	fprintf(stderr, "control compilation and installation of the executable.  However, as a\n");
	fprintf(stderr, "special exception, the source code distributed need not include\n");
	fprintf(stderr, "anything that is normally distributed (in either source or binary\n");
	fprintf(stderr, "\n");
	
		waitForReturn();
		
	fprintf(stderr, "\n");
	fprintf(stderr, "form) with the major components (compiler, kernel, and so on) of the\n");
	fprintf(stderr, "operating system on which the executable runs, unless that component\n");
	fprintf(stderr, "itself accompanies the executable.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "If distribution of executable or object code is made by offering\n");
	fprintf(stderr, "access to copy from a designated place, then offering equivalent\n");
	fprintf(stderr, "access to copy the source code from the same place counts as\n");
	fprintf(stderr, "distribution of the source code, even though third parties are not\n");
	fprintf(stderr, "compelled to copy the source along with the object code.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  4. You may not copy, modify, sublicense, or distribute the Program\n");
	fprintf(stderr, "except as expressly provided under this License.  Any attempt\n");
	fprintf(stderr, "otherwise to copy, modify, sublicense or distribute the Program is\n");
	fprintf(stderr, "void, and will automatically terminate your rights under this License.\n");
	fprintf(stderr, "However, parties who have received copies, or rights, from you under\n");
	fprintf(stderr, "this License will not have their licenses terminated so long as such\n");
	fprintf(stderr, "parties remain in full compliance.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  5. You are not required to accept this License, since you have not\n");
	fprintf(stderr, "signed it.  However, nothing else grants you permission to modify or\n");
	fprintf(stderr, "distribute the Program or its derivative works.  These actions are\n");
	fprintf(stderr, "prohibited by law if you do not accept this License.  Therefore, by\n");
	fprintf(stderr, "modifying or distributing the Program (or any work based on the\n");
	fprintf(stderr, "\n");
	
		waitForReturn();
		
	fprintf(stderr, "\n");
	fprintf(stderr, "Program), you indicate your acceptance of this License to do so, and\n");
	fprintf(stderr, "all its terms and conditions for copying, distributing or modifying\n");
	fprintf(stderr, "the Program or works based on it.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  6. Each time you redistribute the Program (or any work based on the\n");
	fprintf(stderr, "Program), the recipient automatically receives a license from the\n");
	fprintf(stderr, "original licensor to copy, distribute or modify the Program subject to\n");
	fprintf(stderr, "these terms and conditions.  You may not impose any further\n");
	fprintf(stderr, "restrictions on the recipients' exercise of the rights granted herein.\n");
	fprintf(stderr, "You are not responsible for enforcing compliance by third parties to\n");
	fprintf(stderr, "this License.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  7. If, as a consequence of a court judgment or allegation of patent\n");
	fprintf(stderr, "infringement or for any other reason (not limited to patent issues),\n");
	fprintf(stderr, "conditions are imposed on you (whether by court order, agreement or\n");
	fprintf(stderr, "otherwise) that contradict the conditions of this License, they do not\n");
	fprintf(stderr, "excuse you from the conditions of this License.  If you cannot\n");
	fprintf(stderr, "distribute so as to satisfy simultaneously your obligations under this\n");
	fprintf(stderr, "License and any other pertinent obligations, then as a consequence you\n");
	fprintf(stderr, "may not distribute the Program at all.  For example, if a patent\n");
	fprintf(stderr, "license would not permit royalty-free redistribution of the Program by\n");
	fprintf(stderr, "all those who receive copies directly or indirectly through you, then\n");
	fprintf(stderr, "the only way you could satisfy both it and this License would be to\n");
	fprintf(stderr, "\n");
	
		waitForReturn();
		
	fprintf(stderr, "\n");
	fprintf(stderr, "refrain entirely from distribution of the Program.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "If any portion of this section is held invalid or unenforceable under\n");
	fprintf(stderr, "any particular circumstance, the balance of the section is intended to\n");
	fprintf(stderr, "apply and the section as a whole is intended to apply in other\n");
	fprintf(stderr, "circumstances.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "It is not the purpose of this section to induce you to infringe any\n");
	fprintf(stderr, "patents or other property right claims or to contest validity of any\n");
	fprintf(stderr, "such claims; this section has the sole purpose of protecting the\n");
	fprintf(stderr, "integrity of the free software distribution system, which is\n");
	fprintf(stderr, "implemented by public license practices.  Many people have made\n");
	fprintf(stderr, "generous contributions to the wide range of software distributed\n");
	fprintf(stderr, "through that system in reliance on consistent application of that\n");
	fprintf(stderr, "system; it is up to the author/donor to decide if he or she is willing\n");
	fprintf(stderr, "to distribute software through any other system and a licensee cannot\n");
	fprintf(stderr, "impose that choice.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "This section is intended to make thoroughly clear what is believed to\n");
	fprintf(stderr, "be a consequence of the rest of this License.\n");
	fprintf(stderr, "  8. If the distribution and/or use of the Program is restricted in\n");
	fprintf(stderr, "certain countries either by patents or by copyrighted interfaces, the\n");
	fprintf(stderr, "original copyright holder who places the Program under this License\n");
	fprintf(stderr, "\n");
	
		waitForReturn();
		
	fprintf(stderr, "\n");
	fprintf(stderr, "may add an explicit geographical distribution limitation excluding\n");
	fprintf(stderr, "those countries, so that distribution is permitted only in or among\n");
	fprintf(stderr, "countries not thus excluded.  In such case, this License incorporates\n");
	fprintf(stderr, "the limitation as if written in the body of this License.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  9. The Free Software Foundation may publish revised and/or new versions\n");
	fprintf(stderr, "of the General Public License from time to time.  Such new versions will\n");
	fprintf(stderr, "be similar in spirit to the present version, but may differ in detail to\n");
	fprintf(stderr, "address new problems or concerns.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "Each version is given a distinguishing version number.  If the Program\n");
	fprintf(stderr, "specifies a version number of this License which applies to it and 'any\n");
	fprintf(stderr, "later version', you have the option of following the terms and conditions\n");
	fprintf(stderr, "either of that version or of any later version published by the Free\n");
	fprintf(stderr, "Software Foundation.  If the Program does not specify a version number of\n");
	fprintf(stderr, "this License, you may choose any version ever published by the Free Software\n");
	fprintf(stderr, "Foundation.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  10. If you wish to incorporate parts of the Program into other free\n");
	fprintf(stderr, "programs whose distribution conditions are different, write to the author\n");
	fprintf(stderr, "to ask for permission.  For software which is copyrighted by the Free\n");
	fprintf(stderr, "Software Foundation, write to the Free Software Foundation; we sometimes\n");
	fprintf(stderr, "make exceptions for this.  Our decision will be guided by the two goals\n");
	fprintf(stderr, "\n");
	
		waitForReturn();
	
	fprintf(stderr, "\n");
	fprintf(stderr, "of preserving the free status of all derivatives of our free software and\n");
	fprintf(stderr, "of promoting the sharing and reuse of software generally.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "			    NO WARRANTY\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  11. BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTY\n");
	fprintf(stderr, "FOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW.  EXCEPT WHEN\n");
	fprintf(stderr, "OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES\n");
	fprintf(stderr, "PROVIDE THE PROGRAM 'AS IS' WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED\n");
	fprintf(stderr, "OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF\n");
	fprintf(stderr, "MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK AS\n");
	fprintf(stderr, "TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THE\n");
	fprintf(stderr, "PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING,\n");
	fprintf(stderr, "REPAIR OR CORRECTION.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  12. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING\n");
	fprintf(stderr, "WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY AND/OR\n");
	fprintf(stderr, "REDISTRIBUTE THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES,\n");
	fprintf(stderr, "INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING\n");
	fprintf(stderr, "OUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED\n");
	fprintf(stderr, "TO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY\n");
	fprintf(stderr, "YOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER\n");
	fprintf(stderr, "PROGRAMS), EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE\n");
	fprintf(stderr, "\n");
	
		waitForReturn();
	
	fprintf(stderr, "\n");
	fprintf(stderr, "POSSIBILITY OF SUCH DAMAGES.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "		     END OF TERMS AND CONDITIONS\n");
	fprintf(stderr, "	    How to Apply These Terms to Your New Programs\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  If you develop a new program, and you want it to be of the greatest\n");
	fprintf(stderr, "possible use to the public, the best way to achieve this is to make it\n");
	fprintf(stderr, "free software which everyone can redistribute and change under these terms.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  To do so, attach the following notices to the program.  It is safest\n");
	fprintf(stderr, "to attach them to the start of each source file to most effectively\n");
	fprintf(stderr, "convey the exclusion of warranty; and each file should have at least\n");
	fprintf(stderr, "the 'copyright' line and a pointer to where the full notice is found.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "    <one line to give the program's name and a brief idea of what it does.>\n");
	fprintf(stderr, "    Copyright (C) <year>  <name of author>\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "    This program is free software; you can redistribute it and/or modify\n");
	fprintf(stderr, "    it under the terms of the GNU General Public License as published by\n");
	fprintf(stderr, "    the Free Software Foundation; either version 2 of the License, or\n");
	fprintf(stderr, "    (at your option) any later version.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "    This program is distributed in the hope that it will be useful,\n");
	fprintf(stderr, "\n");
	
		waitForReturn();
	
	fprintf(stderr, "\n");
	fprintf(stderr, "    but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
	fprintf(stderr, "    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n");
	fprintf(stderr, "    GNU General Public License for more details.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "    You should have received a copy of the GNU General Public License\n");
	fprintf(stderr, "    along with this program; if not, write to the Free Software\n");
	fprintf(stderr, "    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "Also add information on how to contact you by electronic and paper mail.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "If the program is interactive, make it output a short notice like this\n");
	fprintf(stderr, "when it starts in an interactive mode:\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "    Gnomovision version 69, Copyright (C) year name of author\n");
	fprintf(stderr, "    Gnomovision comes with ABSOLUTELY NO WARRANTY; for details type `show w'.\n");
	fprintf(stderr, "    This is free software, and you are welcome to redistribute it\n");
	fprintf(stderr, "    under certain conditions; type `show c' for details.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "The hypothetical commands `show w' and `show c' should show the appropriate\n");
	fprintf(stderr, "parts of the General Public License.  Of course, the commands you use may\n");
	fprintf(stderr, "be called something other than `show w' and `show c'; they could even be\n");
	fprintf(stderr, "mouse-clicks or menu items--whatever suits your program.\n");
	fprintf(stderr, "\n");
	
		waitForReturn();
	
	fprintf(stderr, "\n");
	fprintf(stderr, "You should also get your employer (if you work as a programmer) or your\n");
	fprintf(stderr, "school, if any, to sign a 'copyright disclaimer' for the program, if\n");
	fprintf(stderr, "necessary.  Here is a sample; alter the names:\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  Yoyodyne, Inc., hereby disclaims all copyright interest in the program\n");
	fprintf(stderr, "  `Gnomovision' (which makes passes at compilers) written by James Hacker.\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "  <signature of Ty Coon>, 1 April 1989\n");
	fprintf(stderr, "  Ty Coon, President of Vice\n");
	fprintf(stderr, "\n");
	fprintf(stderr, "This General Public License does not permit incorporating your program into\n");
	fprintf(stderr, "proprietary programs.  If your program is a subroutine library, you may\n");
	fprintf(stderr, "consider it more useful to permit linking proprietary applications with the\n");
	fprintf(stderr, "library.  If this is what you want to do, use the GNU Library General\n");
	fprintf(stderr, "Public License instead of this License.\n");
	fprintf(stderr, "\n");
	
		waitForReturn();

}
