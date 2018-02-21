<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="A_in(3:0)" />
        <signal name="C_out" />
        <signal name="S_out(3:0)" />
        <signal name="B_in(2)" />
        <signal name="B_in(1)" />
        <signal name="B_in(0)" />
        <signal name="B_out(3:0)" />
        <signal name="B_out(2)" />
        <signal name="B_out(1)" />
        <signal name="B_out(0)" />
        <signal name="B_in(3:0)" />
        <signal name="C_in" />
        <signal name="XLXN_10" />
        <signal name="B_in(3)" />
        <signal name="B_out(3)" />
        <port polarity="Input" name="A_in(3:0)" />
        <port polarity="Output" name="C_out" />
        <port polarity="Output" name="S_out(3:0)" />
        <port polarity="Input" name="B_in(3:0)" />
        <port polarity="Input" name="C_in" />
        <blockdef name="fulladd4">
            <timestamp>2018-1-22T23:37:17</timestamp>
            <rect width="256" x="64" y="-192" height="192" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="xor2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="60" y1="-128" y2="-128" x1="0" />
            <line x2="208" y1="-96" y2="-96" x1="256" />
            <arc ex="44" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <arc ex="64" ey="-144" sx="64" sy="-48" r="56" cx="32" cy="-96" />
            <line x2="64" y1="-144" y2="-144" x1="128" />
            <line x2="64" y1="-48" y2="-48" x1="128" />
            <arc ex="128" ey="-144" sx="208" sy="-96" r="88" cx="132" cy="-56" />
            <arc ex="208" ey="-96" sx="128" sy="-48" r="88" cx="132" cy="-136" />
        </blockdef>
        <blockdef name="inv">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <circle r="16" cx="144" cy="-32" />
        </blockdef>
        <block symbolname="xor2" name="XLXI_5">
            <blockpin signalname="XLXN_10" name="I0" />
            <blockpin signalname="B_in(2)" name="I1" />
            <blockpin signalname="B_out(2)" name="O" />
        </block>
        <block symbolname="xor2" name="XLXI_6">
            <blockpin signalname="XLXN_10" name="I0" />
            <blockpin signalname="B_in(1)" name="I1" />
            <blockpin signalname="B_out(1)" name="O" />
        </block>
        <block symbolname="xor2" name="XLXI_7">
            <blockpin signalname="XLXN_10" name="I0" />
            <blockpin signalname="B_in(0)" name="I1" />
            <blockpin signalname="B_out(0)" name="O" />
        </block>
        <block symbolname="fulladd4" name="XLXI_1">
            <blockpin signalname="B_out(3:0)" name="B_in(3:0)" />
            <blockpin signalname="A_in(3:0)" name="A_in(3:0)" />
            <blockpin signalname="XLXN_10" name="C_in" />
            <blockpin signalname="C_out" name="C_out" />
            <blockpin signalname="S_out(3:0)" name="S_out(3:0)" />
        </block>
        <block symbolname="inv" name="XLXI_21">
            <blockpin signalname="C_in" name="I" />
            <blockpin signalname="XLXN_10" name="O" />
        </block>
        <block symbolname="xor2" name="XLXI_19">
            <blockpin signalname="XLXN_10" name="I0" />
            <blockpin signalname="B_in(3)" name="I1" />
            <blockpin signalname="B_out(3)" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <branch name="A_in(3:0)">
            <wire x2="352" y1="1168" y2="1168" x1="336" />
            <wire x2="928" y1="1168" y2="1168" x1="352" />
        </branch>
        <instance x="464" y="704" name="XLXI_5" orien="R0" />
        <instance x="464" y="880" name="XLXI_6" orien="R0" />
        <instance x="464" y="1056" name="XLXI_7" orien="R0" />
        <iomarker fontsize="28" x="336" y="1168" name="A_in(3:0)" orien="R180" />
        <instance x="928" y="1264" name="XLXI_1" orien="R0">
        </instance>
        <branch name="C_out">
            <wire x2="1328" y1="1104" y2="1104" x1="1312" />
            <wire x2="1344" y1="1104" y2="1104" x1="1328" />
        </branch>
        <branch name="S_out(3:0)">
            <wire x2="1328" y1="1232" y2="1232" x1="1312" />
            <wire x2="1344" y1="1232" y2="1232" x1="1328" />
        </branch>
        <iomarker fontsize="28" x="1344" y="1104" name="C_out" orien="R0" />
        <iomarker fontsize="28" x="1344" y="1232" name="S_out(3:0)" orien="R0" />
        <branch name="B_in(2)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="424" y="576" type="branch" />
            <wire x2="464" y1="576" y2="576" x1="416" />
        </branch>
        <branch name="B_in(1)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="424" y="752" type="branch" />
            <wire x2="464" y1="752" y2="752" x1="416" />
        </branch>
        <branch name="B_in(0)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="424" y="928" type="branch" />
            <wire x2="464" y1="928" y2="928" x1="416" />
        </branch>
        <bustap x2="736" y1="608" y2="608" x1="832" />
        <branch name="B_out(2)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="728" y="608" type="branch" />
            <wire x2="736" y1="608" y2="608" x1="720" />
        </branch>
        <bustap x2="736" y1="784" y2="784" x1="832" />
        <branch name="B_out(1)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="728" y="784" type="branch" />
            <wire x2="736" y1="784" y2="784" x1="720" />
        </branch>
        <bustap x2="736" y1="960" y2="960" x1="832" />
        <branch name="B_out(0)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="728" y="960" type="branch" />
            <wire x2="736" y1="960" y2="960" x1="720" />
        </branch>
        <branch name="B_in(3:0)">
            <wire x2="320" y1="320" y2="352" x1="320" />
            <wire x2="320" y1="352" y2="368" x1="320" />
            <wire x2="320" y1="368" y2="560" x1="320" />
            <wire x2="320" y1="560" y2="576" x1="320" />
            <wire x2="320" y1="576" y2="752" x1="320" />
            <wire x2="320" y1="752" y2="928" x1="320" />
        </branch>
        <bustap x2="416" y1="576" y2="576" x1="320" />
        <bustap x2="416" y1="752" y2="752" x1="320" />
        <bustap x2="416" y1="928" y2="928" x1="320" />
        <branch name="C_in">
            <wire x2="304" y1="1232" y2="1232" x1="272" />
        </branch>
        <iomarker fontsize="28" x="272" y="1232" name="C_in" orien="R180" />
        <instance x="304" y="1264" name="XLXI_21" orien="R0" />
        <branch name="B_out(3:0)">
            <wire x2="832" y1="400" y2="592" x1="832" />
            <wire x2="832" y1="592" y2="608" x1="832" />
            <wire x2="832" y1="608" y2="784" x1="832" />
            <wire x2="832" y1="784" y2="960" x1="832" />
            <wire x2="832" y1="960" y2="976" x1="832" />
            <wire x2="832" y1="976" y2="1104" x1="832" />
            <wire x2="928" y1="1104" y2="1104" x1="832" />
        </branch>
        <branch name="XLXN_10">
            <wire x2="432" y1="432" y2="640" x1="432" />
            <wire x2="432" y1="640" y2="816" x1="432" />
            <wire x2="432" y1="816" y2="992" x1="432" />
            <wire x2="432" y1="992" y2="1088" x1="432" />
            <wire x2="544" y1="1088" y2="1088" x1="432" />
            <wire x2="544" y1="1088" y2="1232" x1="544" />
            <wire x2="928" y1="1232" y2="1232" x1="544" />
            <wire x2="464" y1="992" y2="992" x1="432" />
            <wire x2="464" y1="816" y2="816" x1="432" />
            <wire x2="464" y1="640" y2="640" x1="432" />
            <wire x2="464" y1="432" y2="432" x1="432" />
            <wire x2="544" y1="1232" y2="1232" x1="528" />
        </branch>
        <instance x="464" y="496" name="XLXI_19" orien="R0" />
        <iomarker fontsize="28" x="320" y="320" name="B_in(3:0)" orien="R270" />
        <bustap x2="416" y1="368" y2="368" x1="320" />
        <bustap x2="736" y1="400" y2="400" x1="832" />
        <branch name="B_in(3)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="424" y="368" type="branch" />
            <wire x2="424" y1="368" y2="368" x1="416" />
            <wire x2="432" y1="368" y2="368" x1="424" />
            <wire x2="464" y1="368" y2="368" x1="432" />
        </branch>
        <branch name="B_out(3)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="728" y="400" type="branch" />
            <wire x2="736" y1="400" y2="400" x1="720" />
        </branch>
    </sheet>
</drawing>