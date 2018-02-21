<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="C_in(3:0)" />
        <signal name="D_in(3:0)" />
        <signal name="S0_in" />
        <signal name="S1_in" />
        <signal name="B_in(3:0)" />
        <signal name="A_in(3:0)" />
        <signal name="Mux_out(3:0)" />
        <signal name="Mux_out(3)" />
        <signal name="Mux_out(2)" />
        <signal name="Mux_out(1)" />
        <signal name="Mux_out(0)" />
        <signal name="A_in(3)" />
        <signal name="A_in(2)" />
        <signal name="A_in(1)" />
        <signal name="A_in(0)" />
        <signal name="B_in(3)" />
        <signal name="B_in(2)" />
        <signal name="B_in(1)" />
        <signal name="B_in(0)" />
        <signal name="C_in(3)" />
        <signal name="C_in(2)" />
        <signal name="C_in(1)" />
        <signal name="C_in(0)" />
        <signal name="D_in(3)" />
        <signal name="D_in(2)" />
        <signal name="D_in(1)" />
        <signal name="D_in(0)" />
        <port polarity="Input" name="C_in(3:0)" />
        <port polarity="Input" name="D_in(3:0)" />
        <port polarity="Input" name="S0_in" />
        <port polarity="Input" name="S1_in" />
        <port polarity="Input" name="B_in(3:0)" />
        <port polarity="Input" name="A_in(3:0)" />
        <port polarity="Output" name="Mux_out(3:0)" />
        <blockdef name="Mux4to1">
            <timestamp>2018-1-22T22:51:23</timestamp>
            <rect width="256" x="64" y="-384" height="384" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
        </blockdef>
        <block symbolname="Mux4to1" name="XLXI_1">
            <blockpin signalname="A_in(3)" name="A_in" />
            <blockpin signalname="B_in(3)" name="B_in" />
            <blockpin signalname="C_in(3)" name="C_in" />
            <blockpin signalname="D_in(3)" name="D_in" />
            <blockpin signalname="S0_in" name="S0" />
            <blockpin signalname="S1_in" name="S1" />
            <blockpin signalname="Mux_out(3)" name="Mux_out" />
        </block>
        <block symbolname="Mux4to1" name="XLXI_3">
            <blockpin signalname="A_in(2)" name="A_in" />
            <blockpin signalname="B_in(2)" name="B_in" />
            <blockpin signalname="C_in(2)" name="C_in" />
            <blockpin signalname="D_in(2)" name="D_in" />
            <blockpin signalname="S0_in" name="S0" />
            <blockpin signalname="S1_in" name="S1" />
            <blockpin signalname="Mux_out(2)" name="Mux_out" />
        </block>
        <block symbolname="Mux4to1" name="XLXI_4">
            <blockpin signalname="A_in(1)" name="A_in" />
            <blockpin signalname="B_in(1)" name="B_in" />
            <blockpin signalname="C_in(1)" name="C_in" />
            <blockpin signalname="D_in(1)" name="D_in" />
            <blockpin signalname="S0_in" name="S0" />
            <blockpin signalname="S1_in" name="S1" />
            <blockpin signalname="Mux_out(1)" name="Mux_out" />
        </block>
        <block symbolname="Mux4to1" name="XLXI_5">
            <blockpin signalname="A_in(0)" name="A_in" />
            <blockpin signalname="B_in(0)" name="B_in" />
            <blockpin signalname="C_in(0)" name="C_in" />
            <blockpin signalname="D_in(0)" name="D_in" />
            <blockpin signalname="S0_in" name="S0" />
            <blockpin signalname="S1_in" name="S1" />
            <blockpin signalname="Mux_out(0)" name="Mux_out" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1200" y="768" name="XLXI_1" orien="R0">
        </instance>
        <instance x="1200" y="1264" name="XLXI_3" orien="R0">
        </instance>
        <instance x="1200" y="1760" name="XLXI_4" orien="R0">
        </instance>
        <instance x="1200" y="2208" name="XLXI_5" orien="R0">
        </instance>
        <branch name="C_in(3:0)">
            <wire x2="528" y1="256" y2="528" x1="528" />
            <wire x2="528" y1="528" y2="544" x1="528" />
            <wire x2="528" y1="544" y2="1040" x1="528" />
            <wire x2="528" y1="1040" y2="1536" x1="528" />
            <wire x2="528" y1="1536" y2="1984" x1="528" />
        </branch>
        <branch name="D_in(3:0)">
            <wire x2="688" y1="256" y2="592" x1="688" />
            <wire x2="688" y1="592" y2="608" x1="688" />
            <wire x2="688" y1="608" y2="1104" x1="688" />
            <wire x2="688" y1="1104" y2="1600" x1="688" />
            <wire x2="688" y1="1600" y2="2048" x1="688" />
        </branch>
        <branch name="S0_in">
            <wire x2="864" y1="256" y2="672" x1="864" />
            <wire x2="1200" y1="672" y2="672" x1="864" />
            <wire x2="864" y1="672" y2="1168" x1="864" />
            <wire x2="1200" y1="1168" y2="1168" x1="864" />
            <wire x2="864" y1="1168" y2="1664" x1="864" />
            <wire x2="1200" y1="1664" y2="1664" x1="864" />
            <wire x2="864" y1="1664" y2="2112" x1="864" />
            <wire x2="1200" y1="2112" y2="2112" x1="864" />
        </branch>
        <branch name="S1_in">
            <wire x2="1024" y1="256" y2="736" x1="1024" />
            <wire x2="1200" y1="736" y2="736" x1="1024" />
            <wire x2="1024" y1="736" y2="1232" x1="1024" />
            <wire x2="1200" y1="1232" y2="1232" x1="1024" />
            <wire x2="1024" y1="1232" y2="1728" x1="1024" />
            <wire x2="1200" y1="1728" y2="1728" x1="1024" />
            <wire x2="1024" y1="1728" y2="2176" x1="1024" />
            <wire x2="1200" y1="2176" y2="2176" x1="1024" />
        </branch>
        <branch name="B_in(3:0)">
            <wire x2="384" y1="256" y2="480" x1="384" />
            <wire x2="384" y1="480" y2="976" x1="384" />
            <wire x2="384" y1="976" y2="1472" x1="384" />
            <wire x2="384" y1="1472" y2="1920" x1="384" />
        </branch>
        <branch name="A_in(3:0)">
            <wire x2="240" y1="240" y2="416" x1="240" />
            <wire x2="240" y1="416" y2="912" x1="240" />
            <wire x2="240" y1="912" y2="1408" x1="240" />
            <wire x2="240" y1="1408" y2="1856" x1="240" />
        </branch>
        <branch name="Mux_out(3:0)">
            <wire x2="1840" y1="336" y2="400" x1="1840" />
            <wire x2="1840" y1="400" y2="416" x1="1840" />
            <wire x2="1840" y1="416" y2="432" x1="1840" />
            <wire x2="1840" y1="432" y2="912" x1="1840" />
            <wire x2="1840" y1="912" y2="1408" x1="1840" />
            <wire x2="1840" y1="1408" y2="1856" x1="1840" />
        </branch>
        <iomarker fontsize="28" x="240" y="240" name="A_in(3:0)" orien="R270" />
        <iomarker fontsize="28" x="384" y="256" name="B_in(3:0)" orien="R270" />
        <bustap x2="1744" y1="416" y2="416" x1="1840" />
        <branch name="Mux_out(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1664" y="416" type="branch" />
            <wire x2="1664" y1="416" y2="416" x1="1584" />
            <wire x2="1744" y1="416" y2="416" x1="1664" />
        </branch>
        <bustap x2="1744" y1="912" y2="912" x1="1840" />
        <branch name="Mux_out(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1664" y="912" type="branch" />
            <wire x2="1664" y1="912" y2="912" x1="1584" />
            <wire x2="1744" y1="912" y2="912" x1="1664" />
        </branch>
        <bustap x2="1744" y1="1408" y2="1408" x1="1840" />
        <branch name="Mux_out(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1664" y="1408" type="branch" />
            <wire x2="1664" y1="1408" y2="1408" x1="1584" />
            <wire x2="1744" y1="1408" y2="1408" x1="1664" />
        </branch>
        <bustap x2="1744" y1="1856" y2="1856" x1="1840" />
        <branch name="Mux_out(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1664" y="1856" type="branch" />
            <wire x2="1664" y1="1856" y2="1856" x1="1584" />
            <wire x2="1744" y1="1856" y2="1856" x1="1664" />
        </branch>
        <bustap x2="336" y1="416" y2="416" x1="240" />
        <branch name="A_in(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="768" y="416" type="branch" />
            <wire x2="768" y1="416" y2="416" x1="336" />
            <wire x2="1200" y1="416" y2="416" x1="768" />
        </branch>
        <bustap x2="336" y1="912" y2="912" x1="240" />
        <branch name="A_in(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="768" y="912" type="branch" />
            <wire x2="768" y1="912" y2="912" x1="336" />
            <wire x2="1200" y1="912" y2="912" x1="768" />
        </branch>
        <bustap x2="336" y1="1408" y2="1408" x1="240" />
        <branch name="A_in(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="768" y="1408" type="branch" />
            <wire x2="768" y1="1408" y2="1408" x1="336" />
            <wire x2="1200" y1="1408" y2="1408" x1="768" />
        </branch>
        <bustap x2="336" y1="1856" y2="1856" x1="240" />
        <branch name="A_in(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="768" y="1856" type="branch" />
            <wire x2="768" y1="1856" y2="1856" x1="336" />
            <wire x2="1200" y1="1856" y2="1856" x1="768" />
        </branch>
        <bustap x2="480" y1="480" y2="480" x1="384" />
        <branch name="B_in(3)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="840" y="480" type="branch" />
            <wire x2="848" y1="480" y2="480" x1="480" />
            <wire x2="1200" y1="480" y2="480" x1="848" />
        </branch>
        <bustap x2="480" y1="976" y2="976" x1="384" />
        <branch name="B_in(2)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="840" y="976" type="branch" />
            <wire x2="848" y1="976" y2="976" x1="480" />
            <wire x2="1200" y1="976" y2="976" x1="848" />
        </branch>
        <bustap x2="480" y1="1472" y2="1472" x1="384" />
        <branch name="B_in(1)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="840" y="1472" type="branch" />
            <wire x2="848" y1="1472" y2="1472" x1="480" />
            <wire x2="1200" y1="1472" y2="1472" x1="848" />
        </branch>
        <bustap x2="480" y1="1920" y2="1920" x1="384" />
        <branch name="B_in(0)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="840" y="1920" type="branch" />
            <wire x2="848" y1="1920" y2="1920" x1="480" />
            <wire x2="1200" y1="1920" y2="1920" x1="848" />
        </branch>
        <bustap x2="624" y1="544" y2="544" x1="528" />
        <branch name="C_in(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="912" y="544" type="branch" />
            <wire x2="912" y1="544" y2="544" x1="624" />
            <wire x2="1200" y1="544" y2="544" x1="912" />
        </branch>
        <bustap x2="624" y1="1040" y2="1040" x1="528" />
        <branch name="C_in(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="912" y="1040" type="branch" />
            <wire x2="912" y1="1040" y2="1040" x1="624" />
            <wire x2="1200" y1="1040" y2="1040" x1="912" />
        </branch>
        <bustap x2="624" y1="1536" y2="1536" x1="528" />
        <branch name="C_in(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="912" y="1536" type="branch" />
            <wire x2="912" y1="1536" y2="1536" x1="624" />
            <wire x2="1200" y1="1536" y2="1536" x1="912" />
        </branch>
        <bustap x2="624" y1="1984" y2="1984" x1="528" />
        <branch name="C_in(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="912" y="1984" type="branch" />
            <wire x2="912" y1="1984" y2="1984" x1="624" />
            <wire x2="1200" y1="1984" y2="1984" x1="912" />
        </branch>
        <bustap x2="784" y1="608" y2="608" x1="688" />
        <branch name="D_in(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="992" y="608" type="branch" />
            <wire x2="992" y1="608" y2="608" x1="784" />
            <wire x2="1200" y1="608" y2="608" x1="992" />
        </branch>
        <bustap x2="784" y1="1104" y2="1104" x1="688" />
        <branch name="D_in(2)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="992" y="1104" type="branch" />
            <wire x2="992" y1="1104" y2="1104" x1="784" />
            <wire x2="1200" y1="1104" y2="1104" x1="992" />
        </branch>
        <bustap x2="784" y1="1600" y2="1600" x1="688" />
        <branch name="D_in(1)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="992" y="1600" type="branch" />
            <wire x2="992" y1="1600" y2="1600" x1="784" />
            <wire x2="1200" y1="1600" y2="1600" x1="992" />
        </branch>
        <bustap x2="784" y1="2048" y2="2048" x1="688" />
        <branch name="D_in(0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="992" y="2048" type="branch" />
            <wire x2="992" y1="2048" y2="2048" x1="784" />
            <wire x2="1200" y1="2048" y2="2048" x1="992" />
        </branch>
        <iomarker fontsize="28" x="1840" y="336" name="Mux_out(3:0)" orien="R270" />
        <iomarker fontsize="28" x="528" y="256" name="C_in(3:0)" orien="R270" />
        <iomarker fontsize="28" x="688" y="256" name="D_in(3:0)" orien="R270" />
        <iomarker fontsize="28" x="864" y="256" name="S0_in" orien="R270" />
        <iomarker fontsize="28" x="1024" y="256" name="S1_in" orien="R270" />
    </sheet>
</drawing>