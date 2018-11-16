# LCSAssignment-2_Part-1
Logic in Computer Science Assignment 2-Part-1 along with Documentation

Project Status-Completed

Collaborators-AjithKanduri,VamsiAdapa.

Documentation of the Project can be viewed in html pages by opening index.html file in Documentation folder in repository's root.

Project Description:
  Aim:
    To create a parse tree of a well defined propositional logic formula

  Assumptions Made:
    1.Each propositional formula should begin and end with parenthesis

    examples:
    (i) (a^b) is valid
    (ii) a^b is invalid
    (iii) ((a^b)^(c^d)) is valid
    (iv) (a^b)^(c^d) is invalid

   2.In case of negation ormultiple negations to a literal/formula, each negation is enclosed within set of parenthesis.
      examples:
      (i) ~p is invalid
      (ii) (~p) is valid
      (iii) (~(~p)) is valid
      (iv) (~~p) is invalid

  Procedure:
    1.Convert given well formed formula(in Infix form) to Postfix form.
    2.Convert the postfix expression to a rooted binary parse tree.
    3.By traversing parse tree inOrder generate inFix expression.
