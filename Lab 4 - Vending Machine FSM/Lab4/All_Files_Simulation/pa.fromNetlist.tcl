
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name Lab4 -dir "C:/Users/Warren/Desktop/Lab4/planAhead_run_4" -part xc6slx45csg484-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Warren/Desktop/Lab4/Lab4.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Warren/Desktop/Lab4} }
set_property target_constrs_file "Anvyl_Master.ucf" [current_fileset -constrset]
add_files [list {Anvyl_Master.ucf}] -fileset [get_property constrset [current_run]]
link_design
